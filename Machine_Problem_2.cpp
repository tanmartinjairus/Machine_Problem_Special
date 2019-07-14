#include <iostream>
#include <math.h> //Enables pre defined functions
using namespace std;
const double pi = 3.1415;
double Length, Width, Height, Radius;

void cone(double Radius, double Height)
//The inputs needed to obtain the volume of the cone
{
	double Volume = 0, Lateral = 0, Base = 0, Surface = 0;
	
	// Formula that process the given input 
	Volume = 0.333 * pi * pow(Radius, 2) * Height; 
	Lateral = pi * Radius * (sqrt(pow(Radius, 2) + (pow(Height, 2))));
	Base = pi * pow(Radius, 2); 
	Surface = (pi * Radius * (sqrt(pow(Radius, 2) + (pow(Height, 2))))) + (pi * pow(Radius, 2));
	
	// Output the results based on the input and the formulas
	cout << "\nThe Volume of the cone is " << Volume;
	cout << "\nThe Lateral Area of the cone is " << Lateral;
	cout << "\nThe Base Area of the cone is " << Base;
	cout << "\nThe Surface Area of the cone is " << Surface;
	cout << "\n\n-----------------------------------------------------\n";
}

void pyramid(double Length, double Width, double Height)
//The inputs needed to obtain the volume of the pyramid
{
	double Volume = 0, Lateral = 0, Base = 0, Surface = 0;
	
	// Formula that process the given input 
	Volume = (Length * Width * Height) / 3;
	Lateral = Length * (sqrt(pow(Height, 2) + (pow(Length / 2, 2)))) +Width * (sqrt(pow(Height, 2) + (pow(Width / 2, 2))));
	Base = Length * Width;
	Surface = (Length * Width) + (Length * (sqrt(pow(Height, 2) + (pow(Length / 2, 2))))) + (Width * (sqrt(pow(Height, 2) + (pow(Width / 2, 2)))));
	
	// Output the results based on the input and the formulas
	cout << "\nThe Volume of the cone is " << Volume;
	cout << "\nThe Lateral Area of the cone is " << Lateral;
	cout << "\nThe Base Area of the cone is " << Base;
	cout << "\nThe Surface Area of the cone is " << Surface;
	cout << "\n\n-----------------------------------------------------\n";
}

void sphere(double Radius) 
//The inputs needed to obtain the volume of the sphere
{
	double Volume = 0, Surface = 0;
	
	// Formulas that process the given input 
	Volume = 4 / 3 * pi * pow(Radius, 3);
	Surface = 4 * pi * pow(Radius, 2);
	
	// Output the results based on the input and the formulas
	cout << "\nThe Volume of the cone is " << Volume;
	cout << "\nThe Surface Area of the cone is " << Surface;
	cout << "\n\n-----------------------------------------------------\n";
}

int main() //The program that executes the geometric calculator
{
	double Figure;
	char Shape, Choice;
	bool quit = true;
	
	cout << "\t\tGeometric Calculator\n" << endl;
	cout << "Programmed by: Queza | Tan | Vertucio\n";

	do
	{
		cout << "-----------------------------------------------------\n";

		cout << "Pick among the given geometric shapes:" << endl;
		cout << "[C]one" << endl << "[P]yramid" << endl << "[S]phere" << endl;

		cin >> Shape; //Inputs the letter of the figure that solves its respective geometric parameters

		switch (Shape)
		{

			// Solving the various parameters of the cone
		case 'C':
		case 'c':

			// Input the values needed to solve the parameters
			cout << "Enter the radius: ";
			cin >> Radius;

			cout << "Enter the height: ";
			cin >> Height;

			// Using the function above, the volume, lateral area, base area, surface area of the cone can be solved
			cone(Radius, Height);
			break;

			// Solving the various parameters of the pyramid
		case 'P':
		case 'p':

			// Input the values needed to solve the parameters
			cout << "Enter the length: ";
			cin >> Length;

			cout << "Enter the width: ";
			cin >> Width;

			cout << "Enter the height: ";
			cin >> Height;

			// Using the function above, the volume, lateral area, base area, surface area of the pyramid can be solved
			pyramid(Length, Width, Height);
			break;

			// Solving the various parameters of the sphere
		case 'S':
		case 's':

			// Input the value needed to solve the parameters
			cout << "Enter the radius: ";
			cin >> Radius;

			// Using the function above, the volume, surface area of the sphere can be solved
			sphere(Radius);
			break;

		}

		// The program will either loop or not depending on the user input
		cout << "\nDo you want to continue?" << endl << "[Y]es" << endl << "[N]o" << endl;
		cin >> Choice;

		switch (Choice)
		{
		// This user input will let the program to loop
		case 'Y':
		case 'y':
			quit = false;//Prompts the program to repeat
			cout << endl;
			break;

		// The remaining user input will let the program to loop
		case 'N':
		case 'n':
			quit = true;//Prompts the program to exit
			cout << "Press anything to exit";
			break;

		default: 
			quit = true;//Prompts the program to exit
			cout << "Press anything to exit";
		}

	} while (!quit);//The condition must be met for the program to stop. If not, the program will loop.

	system("pause");
	return 0;
}
