#include <iostream>
using namespace std;

int main()
{
    int choice;
    int size = 4;
    cout << "Choose the figure: \n";
    for (int i = 1; i <= 6; i++)
        cout << i << " - Triangle " << i << "\n";
    cin >> choice;

    switch (choice) {
    case 1:
        for (int i = 5; i >= 0; i--) {
            for (int j = 0; j < 5 - i; j++)
                cout << "  ";
            for (int k = 0; k <= i; k++)
                cout << "* ";
            cout << "\n";
        }
        break;

    case 2:
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j <= i; j++)
                cout << "* ";
            cout << "\n";
        }
        break;

    case 3:
        for (int i = 4; i >= 0; i--) {
            for (int j = 0; j < 5 - i - 1; j++)
                cout << " ";
            for (int k = 0; k <= i * 2; k++)
                cout << "*";
            cout << "\n";
        }
        break;

    case 4:
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5 - i - 1; j++)
                cout << " ";
            for (int k = 0; k <= i * 2; k++)
                cout << "*";
            cout << "\n";
        }
        break;
    case 5:
        for (int i = 5; i >= 0; i--) {
            for (int j = 0; j <= i; j++)
                cout << "* ";
            cout << "\n";
        }
        break;

    case 6:
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < i + 1; j++) {
                cout << "* ";
            }
            cout << "\n";
        }

        for (int i = size - 1; i >= 0; i--) {
            for (int j = 0; j < i + 1; j++) {
               cout << "* ";
            }
            cout << "\n";
        }
    default:
        cout << "Invalid choice, try again! \n";
    }
    return 0;
}