//LAB QUIZ 2 CS311 OOP1 - Yosef Mohamed Ahmed - 2210009123 - 7M6
public class Bachelor extends Student {
 
    @Override
    void checkGradute(int hours) //if Bachelor has 170 hours or more, change status to GRADUATE
    {
        if (hours >= 170)
        {
            this.grauated();
        }
    }
}

