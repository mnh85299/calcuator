// Simple calculator project - Done by Menna Allah Mahmoud
// For university C++ course

#include <iostream>
using namespace std;

float sumNumbers(float a, float b) {
    return a + b;
}

float minusNumbers(float a, float b) {
    return a - b;
}

float multi(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main() {
    int choice;
    float num1, num2;

    do {
        cout << "\n===== Simple Calculator =====" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result: " << sumNumbers(num1, num2) << endl;
            break;
        case 2:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result: " << minusNumbers(num1, num2) << endl;
            break;
        case 3:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result: " << multi(num1, num2) << endl;
            break;
        case 4:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result: " << division(num1, num2) << endl;
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}