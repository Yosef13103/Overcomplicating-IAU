public class Teacher extends Person {
    private static final int MAX_COURSES = 5;
    private int  numCourses;
    private String[] courses;

  
    public Teacher(String name, String address)
    {
        super(name, address);
        numCourses = 0;
        courses = new String[MAX_COURSES];
    }
    public Teacher(String name, String address, int numCourses, String[] courses)
    {
        super(name, address);
        this.numCourses = numCourses;
        this.courses = courses;
    }

    public boolean addCourses(String courses)
    {
       
        return false;
    }


    public boolean removeCourse(String courses)
    {
        return false;
    }

    public int getNumCourses() {
        return numCourses;
    }
    public void setNumCourses(int numCourses) {
        this.numCourses = numCourses;
    }
    public String[] getCourses() {
        return courses;
    }
    public void setCourses(String[] courses) {
        this.courses = courses;
    }


    @Override
    public String toString()
    {
        String string = "";

        return string;
    }
}
