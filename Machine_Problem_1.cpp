#include <iostream>
#include <cmath>
using namespace std;

void factor(int b, int c)
{
	int u, v, equation1, equationu, equationv, aftsqrt, remndr, remndru, remndrv, resu, resv;

	resu = (-b + sqrt(pow(b, 2) - 4 * c)) / 2;
	resv = (-b - sqrt(pow(b, 2) - 4 * c)) / 2;
// If the result from (-b) +/- square root of (b^2 - 4 * c) is divisible by 2, then the polynomial is factorable
	{
		cout << "The values that were entered are factorable" << endl << endl;

		if (b == 0 && c < 0) // if the coefficient of x is 0 and the constant is negative
		{
			cout << "x^2 " << "- " << abs(c) << endl; // displays the equation that is factorable given by the user
		}
		
		if (b == 0 && c > 0)// if the coefficient of x is 0 and the constant is positive
		{
			cout << "x^2 " << "+ " << c << endl; // displays the equation that is factorable given by the user
		}

		if (b < 0 && c < 0) // if the coefficient of x and the constant are both negative numbers
		{
			cout << "x^2 - " << abs(b) << "x - " << abs(c) << endl; // displays the equation that is factorable given by the user
		}

		if (b > 0 && c < 0) // if the coefficient of x is a positive number and the constant is negative number
		{
			cout << "x^2 + " << b << "x - " << abs(c) << endl; // displays the equation that is factorable given by the user
		}

		if (b < 0 && c > 0) // if the coefficient of x is a negative number and the constant is positive number
		{
			cout << "x^2 - " << b << "x + " << c << endl; // displays the equation that is factorable given by the user
		}

		if (b > 0 && c > 0) // if the coefficient of x and the constant are both positive numbers
		{
			cout << "x^2 + " << b << "x + " << c << endl; // displays the equation that is factorable given by the user
		}
	
		if (resu > 0 && resv > 0) // if the two factors are both positive numbers
		{
			cout << "The factors are: \n" << "(x - " << abs(resu) << ") and (x - " << abs(resv) << ")" << endl;
		}

		if (resu > 0 && resv < 0) // If the first factor is positive and the second is negative factor
		{
			cout << "The factors are: \n" << "(x + " << abs(resu) << ") and (x - " << abs(resv) << ")" << endl;
			cout << "or" << endl;
			cout << "The factors are: \n" << "(x - " << abs(resu) << ") and (x + " << abs(resv) << ")" << endl;
		}

		if (resu < 0 && resv > 0) // if the first factor is negative and the second is positive
		{
			cout << "The factors are: \n" << "(x + " << abs(resu) << ") and (x - " << abs(resv) << ")" << endl;
			cout << "or" << endl;
			cout << "The factors are: \n" << "(x - " << abs(resu) << ") and (x + " << abs(resv) << ")" << endl;
		}

		if (resu < 0 && resv < 0) // if the two factors are both negative numbers
		{
			cout << "The factors are: \n" << "(x + " << abs(resu) << ") and (x + " << abs(resv) << ")" << endl;
		}
	}

}

void filter(int b, int c)
{
	int u, v, equation1, equationu, equationv, aftsqrt, remndr, remndru, remndrv, resu, resv;
	
	equation1 = pow(b, 2) - 4 * c; // This is the formula to obtain b^2 - 4*c
	aftsqrt = sqrt(equation1); // This is the formula to obtain the square root from the formula b^2 - 4*c 

	remndr = aftsqrt % 1; // Determines if the result from the previous equation is a square (if the result is equal to 0) or not

	equationu = -b + aftsqrt; // Upper portion of the quadratic formula which solves the value for the first factor (positive result from square root)
	equationv = -b - aftsqrt; // Upper portion of the quadratic formula which solves the value for the second factor (negative result from square root)

	remndru = equationu % 2; // Determines if there will be a remainder from the quadratic formula for the positive output from the square root
	remndrv = equationv % 2; // Determines if there will be a remainder from the quadratic formula for the negative output from the square root

	if (equation1 < 0) // If the equation is greater than 0, it can be concluded that u and v are complex numbers
	{
		cout << "The values for u and v are complex numbers." << endl;
	}

	else if (equation1 > 0 &&  ((remndr != 0) || (remndr == 0 && remndru != 0 && remndrv != 0))) //If the formula b^2 - 4 * c is the square of an integer and -b + and - square root of (b^2 - 4 * c) are not divisible by 2. The values for u and v are not integers
	{
		cout << "u and v are not integers." << endl;
	}
	else // If -b + or - square root of (b^2 - 4 * c) are divisible by 2. The values for u and v are integers
	{
		factor(b, c);
	}
}

int main()
{
	int B, C;
	
	cout << "\t\tFactoring a second-degree polynomial\n";
	cout << "Programmed by: Queza | Tan | Vertucio\n" << "-----------------------------------------------------\n";

	cout << "Form: x^2 + bx + c" << endl;

	cout << "Enter the value for b: "; // The user inputs the value of the coefficient of x
	cin >> B;

	cout << "Enter the value for c: "; // The user inputs the value of the constant
	cin >> C;

	filter(B, C); // Uses the function filter to determine the values of the factors

	system("pause");
	return 0;
}