#include <iostream>
#include "linkedList.h"

int main() {
    Single_Linked_List<int> list;

    char input;

    cout << "What would you like to do with the list?";

    while (toupper(input) != 'Q') {
        cout << "(A)dd to front, Add to (B)ack, Remove from (F)ront, (R)emove from back, (C)heck the front value, Check the back (V)alue /n";
        cout << "(C)lear the list, Add to a Value at a (S)pecific index, Remove a value at a specific (I)ndex, Fi(N)d a specific Value, or (Q)uit";

        if (toupper(input) == '1') {
            int result = searchArray(arr);
            if (result == -1) {
                cout << "Number not Found" << endl;
            }
            else {
                cout << "Number found at " << result << endl;
            }
        }
        else if (toupper(input) == 'P') {
            printArray(arr, size);
        }
        else if (toupper(input) == 'M') {
            cout << "Which index in the array do you want to change.\n";
            cin >> index;
            modifyInteger(arr, index);
        }
        else if (toupper(input) == 'A') {
            addInteger(arr, &size);
        }
        else if (toupper(input) == 'R') {
            cout << "Which index in the array do you want to remove.\n";
            cin >> index;
            cin.ignore(1000, '\n');
            try {
                removeInteger(arr, index, &size);
            }
            catch (...) {
                cout << "Error removing Integer";
            }
        }

        else {
            cout << "\nInvalid menu option Try again" << endl;
        }
        printMenu();
        cin >> input;
        cin.ignore(1000, '\n');

    }
    return 0;
}