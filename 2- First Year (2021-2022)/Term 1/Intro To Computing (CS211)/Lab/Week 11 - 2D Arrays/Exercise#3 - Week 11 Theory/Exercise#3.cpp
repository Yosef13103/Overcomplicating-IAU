//writing a program that will help students’ records to be managed and analysed easily
//all courses have 3 credit hours
//passed courses are those with grade letter excluding F or DN

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string student_name, course_name, new_grade;
	int student_index, course_index, taken_hours=0, unfinished_hours=0, finished_hours=0, max=0;
	//taken_hours: total of those with a grade, unfinished_hours: failed or DN , finished_hours: total
	string courses[5]={"CS211", "CS221", "CS311", "Math301", "CIS321" }; //columns 
	string students[4]={"Ahmed", "Khalid", "Omar", "Faisal"}; //rows
	string grades[4][5]={ {"A+", "A+", "-", "A", "-"},  //[row][column]
						  {"A", "B", "A", "F", "B"},
						  {"C", "F", "D+", "C", "-"}, 
						  {"A", "B+", "DN", "F", "-"} };
	
	cout << "Grade Table:" << endl; //printing the grade table
	cout << "\t";
	for (int i = 0; i < 5; i++)
	{
		cout << courses[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << students[i] << "\t";
		for (int j = 0; j < 5; j++)
		{	
			cout << grades[i][j] << "\t";
		}	
		cout << endl;
	}
	cout << endl;	
	
	
	
	
	
	cout << "Enter Student Name: ";
	cin >> student_name;

	for (int i = 0; i < 4; i++) //finding what row the student is in, relative to the grades.
	{
		if (students[i] == student_name)
		{
			student_index = i;
		}
	}
	

	//1. What are the courses a student can take?
		//A student can only take a course if they failed or if there is a "-"
	cout << "1. The courses that " << student_name << " can take are:" << "\n";
	for (int i = 0; i < 5; i++)
	{
		if ( (grades[student_index][i] == "F") || (grades[student_index][i] == "-") )
		{
			cout << courses[i] << endl;
		}
	}
	cout << "\n";
	
	//2. How many credit hours a certain student has taken?
	for (int i = 0; i < 5; i++)
	{
		if ( (grades[student_index][i] != "-" ))
		{
			taken_hours++;
		}
		if ( (grades[student_index][i] != "F") || (grades[student_index][i] != "-") || (grades[student_index][i] != "DN") )
		{
			finished_hours++;
		}
	}	
	cout << "2. "<< student_name << " has taken " << taken_hours*3 << " credit hours." << "\n";
	cout << "3. " << student_name << " has finished " << finished_hours*3 << " credit hours." << "\n\n";

	
	int most[5]; //array to store amount of {      } in each course (For question 4, 5, 7, and 8.
	//4. What is the course that most students have got A in it?
	
	for (int i = 0; i < 5; i++) 
	{
		max=0;
		for (int j = 0; j < 4; j++) //counting amount of A grade in each course
		{
			if (grades[j][i] == "A")
			{
				max++;
			}
		}
		most[i] = max;
	}
	
	max = most[0]; //finding the position of course with max A grade
	for (int i = 0; i < 5; i++)
	{
		if (most[i] > max)
		{
			max = most[i];
		}
	}
	
	for (int i = 0; i < 5; i++) //printing course with most A grade in it
	{
		if (most[i] == max)
		{
			cout << "4. The course that most students have got an A grade in is: " << courses[i] << "\n";
		}
	}
	
	//5. What is the course the most students have passed?
	for (int i = 0; i < 5; i++) 
	{
		max = 4;
		for (int j = 0; j < 4; j++) //counting amount of grades with no F, blank, or DN in each course
		{
			if ( (grades[j][i] == "F") || (grades[j][i] == "-") || (grades[j][i] == "DN") )
			{
				max--;
			}
		}
		most[i] = max;
	}
	
	max = most[0]; //finding the position of course with max passing grades
	for (int i = 0; i < 5; i++)
	{
		if (most[i] > max)
		{
			max = most[i];
		}
	}
	
	for (int i = 0; i < 5; i++) //printing course with most passing grade in it
	{
		if (most[i] == max)
		{
			cout << "5. The course that most students have passed in is: " << courses[i] << "\n";
		}
	}

	
	//7. What is the course that most students have failed in?
	for (int i = 0; i < 5; i++) 
	{
		max = 0;
		for (int j = 0; j < 4; j++) //counting amount of grades with F
		{
			if (grades[j][i] == "F")
			{
				max++;
			}
		}
		most[i] = max;

	}
	
	max = most[0]; //finding the position of course with max failing grades
	for (int i = 0; i < 5; i++)
	{
		if (most[i] > max)
		{
			max = most[i];
		}
	}
	
	for (int i = 0; i < 5; i++) //printing course with most failing grade in it
	{
		if (most[i] == max)
		{
			cout << "7. The course that most students have failed in is: " << courses[i] << "\n";
		}
	}
	
	
	//8. What is the course that most students didn't take yet?
	
		for (int i = 0; i < 5; i++) 
	{
		max = 0;
		for (int j = 0; j < 4; j++) //counting amount of courses with DN
		{
			if (grades[j][i] == "DN" )
			{
				max++;
			}
		}
		most[i] = max;
	}
	
	max = most[0]; //finding the position of course with max DN
	for (int i = 0; i < 5; i++)
	{
		if (most[i] > max)
		{
			max = most[i];
		}
	}
	
	for (int i = 0; i < 5; i++) //printing course with most DN
	{
		if (most[i] == max)
		{
			cout << "8. The course that most students have not taken yet is: " << courses[i] << "\n\n";
		}
	}
	
	
	//6. Change the grade of a student
	cout << "6. Enter the student you wish to change the grade of: ";
	cin >> student_name;
	for (int i = 0; i < 4; i++) //finding what row the student is in, relative to the grades.
	{
		if (students[i] == student_name)
		{
			student_index = i;
		}
	}
	cout << "Enter the course name you wish to change the grade of " << student_name << " in: ";
	cin >> course_name;
	for (int i = 0; i < 5; i++) //finding what column the course is in, relative to the grades
	{
		if (courses[i] == course_name)
		{
			course_index = i;
		}
	}
	cout << "Enter the new grade: ";
	cin >> new_grade;
	grades[student_index][course_index] = new_grade;
	
	cout << "New Grade Table:" << endl; //printing the grade table
	cout << "\t";
	for (int i = 0; i < 5; i++)
	{
		cout << courses[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << students[i] << "\t";
		for (int j = 0; j < 5; j++)
		{	
			cout << grades[i][j] << "\t";
		}	
		cout << endl;
	}
	
	
	return 0;
}
