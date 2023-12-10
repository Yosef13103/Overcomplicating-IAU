public class Task1{
    public static void main(String[] args) throws Exception 
    {        

        Rectangle rectangle1 = new Rectangle(4, 40);
        Rectangle rectangle2 = new Rectangle(3.5, 35.9);
        Rectangle rectangle3 = new Rectangle();
        Rectangle choice;
        for(int i = 0; i < 3; i++)
        {
            if(i == 0)
            {
                choice = rectangle1;
            }
            else if(i == 1)
            {
                choice = rectangle2;
            }
            else
            {
                choice = rectangle3;
            }
            System.out.println("For Rectange" + (i+1));
            System.out.println("Width: " + choice.getWidth());
            System.out.println("Height: " + choice.getHeight());
            System.out.println("Area: " + choice.getArea());
            System.out.println("Perimeter:" + choice.getPerimeter());
            System.out.println("\n");;
        }
    }
}
