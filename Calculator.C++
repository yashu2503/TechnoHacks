#include <iostream>
using namespace std;
int main()
{
    char choice;
    do
    {
        double num1, num2, result;
        cout <<"****** Welcome To Calculator ******\n";
        cout << " Enter two numbers:  ";
        cin >> num1 >> num2;
        cout << " Choose an operation:\n + \n - \n * \n / \n  ";
        cin >> choice;

        switch (choice)
        {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else
                    cout << "Error! Division by zero is not allowed." << endl;
                break;
            default:
                cout << "Invalid operation." << endl;
                break;
        }
        cout << "Result: " << result << endl;
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
    }
        while (choice == 'y' || choice == 'Y');
        cout << "Calculator program terminated. Goodbye!" << endl;
        return 0;
}

