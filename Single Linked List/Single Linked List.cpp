//Assigment 2
//Gregory Linivlle
#include <iostream>

using namespace std;

int main() {

    string input;
    char menu;
    string item;

    cin >> menu;
    cin.ignore(1000, '\n');

    cout << "What would you like to do with the list?";


    while (toupper(menu) != 'Q') {
        cout << "(A)dd to front, Add to (B)ack, Remove from (F)ront, (R)emove from back, (C)heck the front value, Check the back (V)alue\n";
        cout << "(C)lear the list, Add to a Value at a (S)pecific index, Remove a value at a specific (I)ndex, Fi(N)d a specific Value, or (Q)uit\n";


        if (toupper(menu) == 'A') {
            cout << "What would you like to add to the front\n";

            cin >> input;

            cout << "Added\n";
            cin.ignore(1000, '\n');
        }
        else if (toupper(menu) == 'C') {

            string test = "test";
            cout << "The item at the front is \n";
            cout << test;
        }

        else {
            cout << "\nInvalid menu option Try again" << endl;
        }

        cin >> menu;
        cin.ignore(1000, '\n');

    }
}
