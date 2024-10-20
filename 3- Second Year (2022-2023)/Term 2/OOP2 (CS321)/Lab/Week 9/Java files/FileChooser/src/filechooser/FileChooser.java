/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package filechooser;
import java.io.IOException;
import java.nio.file.DirectoryStream;
import java.nio.file.Files;
import java.nio.file.Path;
import javax.swing.JFileChooser;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;

public class FileChooser {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)  throws IOException
   {
      JFileChooserDemo application = new JFileChooserDemo();
      application.setSize(400, 400); 
      application.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      application.setVisible(true); 
   } 
} // end class JFileChooserTest


class JFileChooserDemo extends JFrame
{
   private final JTextArea outputArea; // displays file contents
   
   // set up GUI
   public JFileChooserDemo() throws IOException
   {
      super("JFileChooser Demo");
      outputArea = new JTextArea();
      add(new JScrollPane(outputArea)); // outputArea is scrollable
      analyzePath(); // get Path from user and display info
   } 

   // display information about file or directory user specifies
   public void analyzePath() throws IOException
   {
      // get Path to user-selected file or directory
      Path path = getFileOrDirectoryPath();

      if (path != null && Files.exists(path)) // if exists, display info
      {
         // gather file (or directory) information
         StringBuilder builder = new StringBuilder();
         builder.append(String.format("%s:%n", path.getFileName()));
      	builder.append(String.format("%s a directory%n", 
      		Files.isDirectory(path) ? "Is" : "Is not"));
      	builder.append(String.format("%s an absolute path%n", 
      		path.isAbsolute() ? "Is" : "Is not"));
      	builder.append(String.format("Last modified: %s%n", 
      		Files.getLastModifiedTime(path)));
      	builder.append(String.format("Size: %s%n", Files.size(path)));
      	builder.append(String.format("Path: %s%n", path));
      	builder.append(String.format("Absolute path: %s%n", 
            path.toAbsolutePath()));

         if (Files.isDirectory(path)) // output directory listing
         {
            builder.append(String.format("%nDirectory contents:%n"));
            
            // object for iterating through a directory's contents
            DirectoryStream<Path> directoryStream = 
               Files.newDirectoryStream(path);
   
            for (Path p : directoryStream)
               builder.append(String.format("%s%n", p));
         }

         outputArea.setText(builder.toString()); // display String content
      } 
      else // Path does not exist
      {
         JOptionPane.showMessageDialog(this, path.getFileName() +
            " does not exist.", "ERROR", JOptionPane.ERROR_MESSAGE);
      }   
   } // end method analyzePath

   // allow user to specify file or directory name
   private Path getFileOrDirectoryPath()
   {
      // configure dialog allowing selection of a file or directory
      JFileChooser fileChooser = new JFileChooser();
      fileChooser.setFileSelectionMode( JFileChooser.FILES_AND_DIRECTORIES);
      int result = fileChooser.showOpenDialog(this);

      // if user clicked Cancel button on dialog, return
      if (result == JFileChooser.CANCEL_OPTION)
         System.exit(1);

      // return Path representing the selected file
      return fileChooser.getSelectedFile().toPath();
   } 
} // end class JFileChooserDemo

