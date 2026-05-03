#include <iostream>
using namespace std;

// دوال العمليات
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        cout << "Error: Cannot divide by zero\n";
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    float num1, num2;

    do {
        cout << "\n====== Advanced Calculator ======\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        cout << "Choose option: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result = " << add(num1, num2) << endl;
                break;

            case 2:
                cout << "Result = " << subtract(num1, num2) << endl;
                break;

            case 3:
                cout << "Result = " << multiply(num1, num2) << endl;
                break;

            case 4:
                cout << "Result = " << divide(num1, num2) << endl;
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
