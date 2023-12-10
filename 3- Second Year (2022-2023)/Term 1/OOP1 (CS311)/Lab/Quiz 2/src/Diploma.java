//LAB QUIZ 2 CS311 OOP1 - Yosef Mohamed Ahmed - 2210009123 - 7M6
public class Diploma extends Student 
{
    @Override
    void checkGradute(int hours) //if Diploma has 150 hours or more, change status to GRADUATE
    {
        if (hours >= 150)
        {
            this.grauated();
        }
    }
}
