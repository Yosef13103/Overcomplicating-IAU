
public class Students {
    private Study_Program program = new Study_Program();
    public static int StudCounter = 0;
    public String ID;
    protected String FirstName;
    protected String LastName;
    protected int BirthDate;
    private double GPA;

    public Students()
    {
        ID = null;
        FirstName = null;
        LastName = null;
        BirthDate = 2022;
        GPA = 0.0;
        new Study_Program();
    }
    
    public Students(String ID, String FirstName, String LastName, double GPA, int BirthDate, Study_Program p)
    {
        this.ID = ID;
        this.FirstName = FirstName;
        this.LastName = LastName;
        this.GPA = GPA;
        this.BirthDate = BirthDate;
        program = p;
        StudCounter++;
    }

    public String getName()
    {
        String name = FirstName + " " + LastName;
        return name;
    }

    public int getAge()
    {
        return (2022-BirthDate);
    }

    protected void UpdateGPA(Double NewTermGPA)
    {
        GPA = (GPA + NewTermGPA)/2;  
    }

    public static int getStudCounter() 
    {
        return StudCounter;
    }

    public String getID() 
    {
        return ID;
    }

    public int getBirthDate() 
    {
        return BirthDate;
    }

    public double getGPA() 
    {
        return GPA;
    }
    public Study_Program getQualification()
    {
        return program;
    }

    public void setID(String iD) 
    {
        ID = iD;
    }

    public void setFirstName(String firstName) 
    {
        FirstName = firstName;
    }

    public void setLastName(String lastName) 
    {
        LastName = lastName;
    }

    public void setBirthDate(int birthDate) 
    {
        BirthDate = birthDate;
    }

    public void setGPA(double gPA) 
    {
        GPA = gPA;
    }

    public void setQualification(Study_Program program)
    {
        this.program = program;
    }
}
