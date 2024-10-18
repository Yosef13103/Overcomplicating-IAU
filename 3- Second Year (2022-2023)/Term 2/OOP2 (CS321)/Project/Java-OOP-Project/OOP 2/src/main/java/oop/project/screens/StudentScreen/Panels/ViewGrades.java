package oop.project.screens.StudentScreen.Panels;

import oop.project.API.DatabaseCon;
import oop.project.API.DbUtils;
import oop.project.components.core.TitleLabel;
import oop.project.components.panels.TransparentPanel;
import oop.project.hooks.AddToBox;

import java.awt.*;
import java.sql.ResultSet;

import javax.swing.*;

public class ViewGrades extends TransparentPanel
{
    JTable table;
    ResultSet resultSet;
    String ID = Long.toString(DatabaseCon.currentUser.getUserID());

    public ViewGrades(int Width, int Height)
    {
        JLabel viewCoursesLabel = new TitleLabel("All courses");
        viewCoursesLabel.setAlignmentX(CENTER_ALIGNMENT);

        table = new JTable();
        resultSet = DatabaseCon.getRegisteredCourses(ID);
        table.setModel(DbUtils.resultSetToTableModel(resultSet));

        table.setFont(new Font("Trebuchet MS", Font.PLAIN, 15));
        table.setDragEnabled(false);
        table.setDefaultEditor(Object.class, null);
        table.setRowHeight(40);
        table.setCellSelectionEnabled(false);
        table.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        table.getTableHeader().setReorderingAllowed(false);
        table.getTableHeader().setFont(new Font("Trebuchet MS", Font.BOLD, 20));
        table.setAutoCreateRowSorter(true);
        table.setAlignmentX(CENTER_ALIGNMENT);

        JScrollPane scrollPaneTable = new JScrollPane(table);
        scrollPaneTable.setPreferredSize(new Dimension(Width - 480, Height - 200));
        scrollPaneTable.setMinimumSize(new Dimension(Width - 480, Height - 200));
        scrollPaneTable.setMaximumSize(new Dimension(Width - 480, Height - 200));
        JComponent[] components = {viewCoursesLabel, scrollPaneTable};
        Box registrationsBox = AddToBox.addToHorizontalBoxWithSpace(components, 2);

        this.setLayout(new GridBagLayout());
        GridBagConstraints c = new GridBagConstraints();
        c.fill = GridBagConstraints.BOTH;
        c.gridx = 0;
        c.gridy = 0;
        c.insets = new Insets(0, 0, 0, 0);
        this.add(registrationsBox, c);
        c.gridx = 0;
        c.gridy = 1;
        c.insets = new Insets(100, 200, 0, 200);
    }

    public void refreshTable()
    {
        resultSet = DatabaseCon.getRegisteredCourses(ID);
        table.setModel(DbUtils.resultSetToTableModel(resultSet));
    }
}
