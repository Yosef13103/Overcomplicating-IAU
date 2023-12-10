//CS221 Quiz 2 - Yosef Ahmed - 2210009123 - 4M5
#include <iostream>
using namespace std;


struct Fract {
    int num, deno;
};

Fract add(Fract f1, Fract f2) // adding
{
    Fract f3;
    f3.num = (f1.num*f2.deno) + (f2.num*f1.deno);
    f3.deno = f1.deno * f2.deno;
	cout << "Result: " <<  f3.num << "/" << f3.deno;
	return f3;
}

Fract sub(Fract f1, Fract f2) // subtracting
{
    Fract f3;
    f3.num = (f1.num*f2.deno) - (f2.num*f1.deno);
    f3.deno = f1.deno * f2.deno;
	cout << "Result: " <<  f3.num << "/" << f3.deno;
	return f3;
}

Fract div(Fract f1, Fract f2) // dividing 
{
    Fract f3;
    f3.num = f1.num * f2.deno;
    f3.deno = f1.deno * f2.num;
	cout << "Result: " <<  f3.num << "/" << f3.deno;
	return f3;
}

Fract mult(Fract f1, Fract f2) // multiplying 
{
    Fract f3;
    f3.num = f1.num * f2.num;
    f3.deno = f1.deno * f2.deno;
	cout << "Result: " <<  f3.num << "/" << f3.deno;
	return f3;
}

int main()
{
    Fract n1, n2; //n1 = num, n2 = deno
	char choice;
	while (true) //to ensure denom doesnt = 0
	{
		cout << "Enter first fraction (numerator denominator) ";
		cin >> n1.num;
		cin >> n1.deno;
		cout << "Enter second fraction (numerator denominator) ";
		cin >> n2.num;
		cin >> n2.deno;
		if (n1.deno == 0 || n2.deno == 0)
		{
			cout << "Denominator can not equal zero. Please try again." << endl;
			continue; //repeat the loop
		}
		break;
	}
    
	while (true) //to ensure user inputs correct operation
	{
		cout << "Choose operation (+, -, /, *):  ";
		cin >> choice;
		if (choice == '+')
		{
			add(n1, n2);
			break;
		}
		else if (choice == '-')
		{
			sub(n1, n2);
			break;
		}
		else if (choice == '/')
		{
			div(n1, n2);
			break;
		}
		else if (choice == '*')
		{
			mult(n1, n2);
			break;
		}
		else 
		{
			cout << "That is not a correct choice. Please try again." << endl;
			continue;
		}
	}
    return 0;
}
