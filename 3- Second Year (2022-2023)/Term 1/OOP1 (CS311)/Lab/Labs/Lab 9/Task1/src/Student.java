public class Student extends Person{
    private static final int MAX_COURSES = 30;
    private int numCourses;
    private String[] courses;
    private int[] grades;


    public Student(String name, String address, int numCourses, String[] courses, int[] grades) 
    {
        super(name, address);
        this.numCourses = numCourses;
        this.courses = courses;
        this.grades = grades;
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
    public int[] getGrades() {
        return grades;
    }
    public void setGrades(int[] grades) {
        this.grades = grades;
    }

    public void addCourseGrades(String course, int grade)
    {
        if(numCourses < MAX_COURSES)
        this.grades[numCourses] = grade;
        this.courses[numCourses] = course;
        numCourses++;
    }

    @Override
    public String toString() {
        return "Student [name=" + getName() + ", address=" + getAddress() + ", numCourses=" + numCourses + ", courses=" + courses + ", grades=" + grades + "]";
    }
}
