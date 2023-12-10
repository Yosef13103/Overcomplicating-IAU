//Lab4 - 2210009123 - Yosef Ahmed - 4M5
#include <iostream>
using namespace std;

int main()
{
	int const students = 10, courses = 5;
	int Student_marks[students][courses], min=0, max=0, sum;
	double average=0;
	
	//inputting student marks
	for (int i = 0; i < students; i++) //students
	{
		cout << "Enter marks for student " << i+1 << ": " << endl;
		for (int j = 0; j < courses; j++) //courses
		{
		cout << "   Enter marks for course " << j+1 << ":" << endl;
		cin >> Student_marks[i][j];
		}
	}
	
	

	cout << "\n------STUDENTS------\n"; //average-min-max for each student:
	
	for (int i = 0; i < students; i++) //students to test for
	{
		cout << "For Student " << i+1 << ":";
		for (int j = 0; j < courses; j++) //courses as data to use 
		{
			min = Student_marks[i][0];
			max = Student_marks[i][0];
			
			sum = sum + Student_marks[i][j];
			if (Student_marks[i][j] > max) //max
			{
				max = Student_marks[i][j];
			}
			if (Student_marks[i][j] < min) //min
			{
				min = Student_marks[i][j];
			}	
			average = (sum*1.0)/courses;
		}
		//Outputting
		cout << "\nAverage: " << average << endl;
		
		cout << "Max: " << max << endl;
		
		cout << "Min: " << min << endl;
		cout << "\n\n";
		sum = 0;
		average = 0.0;
	}
	
	cout << "\n------COURSES------\n"; //average-min-max for each course:

	for (int i = 0; i < courses; i++) //courses to test for
	{
		cout << "\nFor Course " << i+1 << ":";
		for (int j = 0; j < students; j++) //students as data to use
		{
			min = Student_marks[0][i];
			max = Student_marks[0][i];
			
			sum = sum + Student_marks[j][i];
			if (Student_marks[j][i] > max) //max
			{
				max = Student_marks[j][i];
			}
			if (Student_marks[j][i] < min) //min
			{
				min = Student_marks[j][i];
			}	
			average = (sum*1.0)/students;
		}
		//Outputting
		cout << "\nAverage: " << average << endl;
		
		cout << "Max: " << max << endl;
		
		cout << "Min: " << min << endl;
		cout << "\n\n";
		sum = 0;
		average = 0.0;
	}
	
	return 0;
}
