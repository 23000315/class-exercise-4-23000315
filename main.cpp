#include <iostream>

using namespace std;

// Function prototypes
void displayMenu();
void performOperation(int choice);

int main(){
    char choice;

    do{
        displayMenu();

        int operation;
        cout << "Enter your choice(1-4): ";
        cin >> operation;

        performOperation(operation);

    cout << "Press y or Y to continue: ";
    cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
void displayMenu() {
    cout << "Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
}
void performOperation(int choice) {
    int num1, num2;
    cout << "Enter integer number 1: ";
    cin >> num1;
    cout << "Enter integer number 2: ";
    cin >> num2;

    switch (choice){
    case 1:
        cout << "Result: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Result: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "Result: " << num1 * num2 << endl;
        break;
    case 4:
        if (num1 == 0){
            cout << "The second integer is zero, divide by zero" << endl;
        } else {
            cout << "Result: " << num1 / num2 << endl;
        }
        break;
    default:
        cout << "Invalid choice!" << endl;

    }

}
