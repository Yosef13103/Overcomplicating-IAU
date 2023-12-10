public class Study_Program {
    String Major;
    String Degree;
    int gradYear;

  
    public Study_Program()
    {
        Major = null;
        Degree = null;
        gradYear = 0;
    }

    public Study_Program(String Major, String Degree, int gradYear)
    {
        this.Major = Major;
        this.Degree = Degree;
        this.gradYear = gradYear;
    }

    public String getMajor() {
        return Major;
    }

    public String getDegree() {
        return Degree;
    }
    public int getGradYear() {
        return gradYear;
    }


    public void setMajor(String major) {
        Major = major;
    }

    public void setDegree(String degree) {
        Degree = degree;
    }

    public void setGradYear(int gradYear) {
        this.gradYear = gradYear;
    }
}
