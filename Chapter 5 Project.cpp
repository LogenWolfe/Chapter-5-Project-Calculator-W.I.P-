// Name: Logen N. Wolfe
// Date: 10/14/26
// Programm: Chapter 5 Project
// Description: Creating a calculator! It should:
// - Display a Menu.
// - Get the user's choices.
// - Get two numbers from the user.
// - Code for addition, subtraction, multiplication, and division respectively.
// - Code for Modulo
// - code for x to the power of y
// - display the results of the calculations.



#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int DisplayMenu();
void GetNumbers(double& num1, double& num2);
double Add(double num1, double num2);
double Subtract(double num1, double num2);
double Multiply(double num1, double num2);
double Divide(double num1, double num2);
int Modulo(int num1, int num2);
double Power(double num1, double num2);
bool PerformArithmetic(int menuItem);

int DisplayMenu()
{

	int choice;
	bool repeat = true;

	double num1;
	double num2;
	double result = 1;
	do {


		cout << " Welcome to Logen's (kinda crummy) homemade calculator!" << endl;
		cout << "Choose an operation, any operation!" << endl;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cout << "5. Modulo" << endl;
		cout << "6. Power" << endl;
		cout << "7. Exit" << endl;

		cin >> choice;
	return choice;
}

void GetNumbers(double& num1, double& num2)
		{
		case 1: cout << "Addition" << endl;
			cout << "Alright! Lemme have your numbers then!" << endl;

			cin >> num1 >> num2;
}

double Add(double num1, double num2)
{
	return num1 + num2;
}

double Subtract(double num1, double num2)
{
	return num1 - num2;
}

double Multiply(double num1, double num2)
{
	return num1 * num2;
}

double Divide(double num1, double num2)
{
	return num1 / num2;
}

int Modulo(int num1, int num2)
{
	return num1 % num2;
}

double Power(double num1, double num2)
{
	double result = 1;

	for (int count = 0; count < num2; count++)
	{
		result *= num1;
	}

	return result;
}

bool PerformArithmetic(int menuItem)
{
	double num1;
	double num2;
	double result;

	switch (menuItem)
	{
	case 1:
		cout << "Addition" << endl;
		GetNumbers(num1, num2);
		result = Add(num1, num2);
			break;

	case 2:
		cout << "Subtraction" << endl;
		GetNumbers(num1, num2);
		result = Subtract(num1, num2);
			break;

	case 3:
		cout << "Multiplication" << endl;
		GetNumbers(num1, num2);
		result = Multiply(num1, num2);
		break;

	case 4:
		cout << "Division" << endl;
		GetNumbers(num1, num2);
		if (num2 == 0)
		{
			cout << "You cannot divide by zero." << endl;
			return true;
		}
		result = Divide(num1, num2);
			break;

	case 5:
		cout << "Modulo" << endl;
		GetNumbers(num1, num2);
		if (static_cast<int>(num2) == 0)
		{
			cout << "You cannot use modulo with zero." << endl;
			return true;
		}
		result = Modulo(static_cast<int>(num1), static_cast<int>(num2));
			break;

	case 6:
		cout << "Power" << endl;
		GetNumbers(num1, num2);
		result = Power(num1, num2);
			break;

	case 7:
		cout << "Exit" << endl;
		return false;

	default:
		cout << "Nah, i got nothin. Maybe try one of the provided options?" << endl;
		return true;
		}

	cout << "And the result is..." << result << "!" << endl;
	return true;
}

int main()
{
	int choice;
	do
	{
		choice = DisplayMenu();
	} while (PerformArithmetic(choice));
}

