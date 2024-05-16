#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
using namespace std;

float addition(float num1, float num2)
{
    return num1 + num2;
}

float subtraction(float num1, float num2)
{
    return num1 - num2;
}

float multiplication(float num1, float num2)
{
    return num1 * num2;
}

float division(float num1, float num2)
{
    if(num2 == 0)
    {
        cout << "Can't Divide by Zero. Try Again!\n";
        return 0;
    }
    else
    {
        float result = num1 / num2;
        return result;
    }
}

// Function to check if the input is numeric
bool isNumeric(const string& str)
{
    stringstream ss(str);
    float f;
    ss >> noskipws >> f;
    return ss.eof() && !ss.fail();
}

int main()
{
    float num1, num2;
    int choice;
    string input;

    while(true)
    {
        cout << "\nThis is a Simple Calculator in C++\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> input;

        // Check if the input is numeric
        if(!isNumeric(input))
        {
            cout << "Invalid input. Please enter a number between 1 and 5.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        choice = stoi(input);

        if(choice == 5)
        {
            cout << "The Program Exited Successfully\n";
            break;
        }
        else
        {
            if(choice < 1 || choice > 5)
            {
                cout << "Enter the Choice only between 1-5. Try again!\n";
                continue;
            }
        }

        cout << "Enter Number_1 and Number_2 values: ";
        cin >> input;

        // Check if both inputs are numeric
        if(!isNumeric(input))
        {
            cout << "Invalid input. Please enter numeric values for Number#1 and Number#2.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        num1 = stof(input);

        cin >> input;

        if(!isNumeric(input))
        {
            cout << "Invalid input. Please enter numeric values for Number#1 and Number#2.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        num2 = stof(input);

        switch(choice)
        {
            case 1:
                cout << "The Addition of Two Numbers is: " << fixed << setprecision(2) << addition(num1, num2) << endl;
                break;
            case 2:
                cout << "The Subtraction of Two Numbers is: " << fixed << setprecision(2) << subtraction(num1, num2) << endl;
                break;
            case 3:
                cout << "The Multiplication of Two Numbers is: " << fixed << setprecision(2) << multiplication(num1, num2) << endl;
                break;
            case 4:
                if(num2 == 0)
                {
                    cout << "Can't Divide by Zero. Try Again!\n";
                }
                else
                {
                    cout << "The Division of Two Numbers is: " << fixed << setprecision(2) << division(num1, num2) << endl;
                }
                break;
            default:
                cout << "Enter the Choice only between 1-5. Try again!\n";
                break;
        }
    }

    return 0;
}

