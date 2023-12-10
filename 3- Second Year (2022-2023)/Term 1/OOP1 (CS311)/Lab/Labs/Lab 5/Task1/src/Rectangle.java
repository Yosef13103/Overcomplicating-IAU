public class Rectangle 
{
    double width;
    double height;

    public Rectangle() //default constructor
    {
        this.width = 1;
        this.height = 1;
    }
    public Rectangle(double userWidth, double userHeight) //user constructor
    {
        this.width = userWidth;
        this.height = userHeight;
    }
    public double getWidth()
    {
        return width;
    }
    public double getHeight()
    {
        return height;
    }
    public double getArea()
    {
        return width * height;
    }
    public double getPerimeter()
    {
        return 2*(width+height);
    }
}