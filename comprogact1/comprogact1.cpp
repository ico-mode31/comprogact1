#include <iostream>
using namespace std;

int main()
{
    int userChoice;
    int num1, num2;
    bool initialNum = false;

        cout << "\t\t\t\t\t\tMENU\n"
            << "1. Add\n"
            << "2. Subtract\n"
            << "3. Multiply\n"
            << "4. Divide\n"
            << "5. Modulus\n"
            << "6. Exit\n"
            << "Enter your choice (1-6): ";
        cin >> userChoice;

        if (userChoice >= 1 && userChoice <= 5)
        {
            cout << "Enter your two integer numbers: ";
            cin >> num1 >> num2;
            initialNum = true;
        }

        switch (userChoice)
        {

        case 1:
            if (initialNum) 
            {
                cout << "Result: " << (num1 + num2) << endl;
            }
            break;

        case 2:
            if (initialNum)
            {
                cout << "Result: " << (num1 - num2) << endl;
            }
            break;

        case 3:
            if (initialNum) {
                cout << "Result: " << (num1 * num2) << endl;
            }
            break;

        case 4:
            if (initialNum)
            {
             cout << "Result: " << (num1 / num2) << endl;
            }
            break;

        case 5:
            if (initialNum)
            {
                cout << "Result: " << (num1 % num2) << endl;
            }
            break;

        case 6:
            cout << "Exiting the program." << endl;
            break;

        default:
            cout << "Wrong number input" << endl;
        }
        return 0;
 
