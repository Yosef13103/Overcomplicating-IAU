//LAB QUIZ 2 CS311 OOP1 - Yosef Mohamed Ahmed - 2210009123 - 7M6
enum Status
{
    ACTIVE, INACTIVE, GRADUATE;
}

public abstract class Student extends User {
    double GPA;

    String ID;
    Status status;
    int hours;

    abstract void checkGradute(int hours); //For overriding

    public double calculateGPA(double CurrSem) //get Total Weighted GPA
    {
        GPA = CurrSem * 100/100 + 0.5;
        return GPA;
    }

    public void grauated() //change status to GRADUATE
    {
        this.status = Status.GRADUATE;
    }

    public double getGPA() {
        return GPA;
    }

    public void setGPA(double gPA) {
        GPA = gPA;
    }

    public String getID() {
        return ID;
    }

    public void setID(String iD) {
        ID = iD;
    }

    public Status getStatus() {
        return status;
    }

    public void setStatus(Status status) {
        this.status = status;
    }

    public int getHours() {
        return hours;
    }

    public void setHours(int hours) {
        this.hours = hours;
    }



}
