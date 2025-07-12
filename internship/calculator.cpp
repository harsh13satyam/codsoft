#include <iostream>


using namespace std;

int main() {
    double num1, num2;
    char operation;
    char choice;

    cout << "Welcome to your personal calculator!\n";
   
    do {
        cout << "\nPlease enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Now choose an operation (+, -, *, /): ";
        cin >> operation;

        cout << "\nCalculating...\n";

        switch (operation) {
            case '+':
                cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
                break;
            case '-':
                cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
                break;
            case '*':
                cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";
                else
                    cout << "Oops! Division by zero is not allowed.\n";
                break;
            default:
                cout << "Hmm, that doesn't look like a valid operation.\n";
        }

        cout << "\nWould you like to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThanks for using the calculator! Have a great day!\n";
    return 0;
}