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


int main()
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


		switch (choice)

		{
		case 1: cout << "Addition" << endl;
			cout << "Alright! Lemme have your numbers then!" << endl;

			cin >> num1 >> num2;

			result = num1 + num2;
			break;

		case 2: cout << "Subtraction" << endl;
			cout << "Alright! Lemme have your numbers then!" << endl;

			cin >> num1 >> num2;

			result = num1 - num2;
			break;

		case 3: cout << "Multiplication" << endl;
			cout << "Alright! Lemme have your numbers then!" << endl;

			cin >> num1 >> num2;

			result = num1 * num2;
			break;

		case 4: cout << "Division" << endl;
			cout << "Alright! Lemme have your numbers then!" << endl;

			cin >> num1 >> num2;

			result = num1 / num2;
			break;

		case 5: cout << "Modulo" << endl;
			cout << "Alright! Lemme have your numbers then!" << endl;

			cin >> num1 >> num2;

			result = static_cast<int>(num1) % static_cast<int>(num2);
			break;

		case 6: cout << "Power" << endl;
			cout << "Alright! Lemme have your numbers then!" << endl;

			cin >> num1 >> num2;
			
			for (int count = 0; count < num2; count++)

				result *= num1;
			break;

		case 7: cout << "Exit" << endl;
			return 0;
			break;

		default: cout << "Nah, i got nothin. Maybe try one of the provided options?";
			break;

		}

		cout << "Hmm, looks like your answer is..." << result << "!" <<endl;
	} while (repeat);

	return 0;
}

