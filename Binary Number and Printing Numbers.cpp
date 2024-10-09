#include <iostream>
#include <string>
using namespace std;
void numbers(string prefix, int k) {
    if (k == 0) {
        cout << prefix << endl;
        return;
    }
    numbers(prefix + "0", k - 1);
    numbers(prefix + "1", k - 1);
}
int main() {
    int choice;

    do {
        cout << "===== Menu =====" << endl;
        cout << "1. One Binary Number." << endl;
        cout << "2. Printing Many Numbers." << endl;
        cout << "3. Exit" << endl;
        cout << "Choose an option (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int m;
                cout << "Enter a not negative number: ";
                cin >> m;
                if (m < 0) {
                    cout << "Please enter a not negative number." << endl;
                } else {
                    if (m == 0) {
                        cout << "0";
                    } else {
                        string binary = "";
                        int num = m;
                        while (num > 0) {
                            binary = to_string(num % 2) + binary;
                            num /= 2;
                        }
                        cout << "Binary number is: " << binary << endl;
                    }
                }
                break;
            }
            case 2: {
                string prefix;
                int k;
                cout << "Enter the binary prefix : ";
                cin >> prefix;
                cout << "Enter the length of the suffix not negative number : ";
                cin >> k;
                if (k < 0) {
                    cout << "Please enter a not negative number for suffix ." << endl;
                } else {
                    numbers( prefix, k);
    }
                break;
            }
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
        cout << endl;
    } while (choice != 3);
    return 0;
}
