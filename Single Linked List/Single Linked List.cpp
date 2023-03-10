//Assigment 2
//Gregory Linivlle
#include <iostream>
#include "single_linked_list.h"

using namespace std;

int main() {
    Single_Linked_List list;
    list.push_front("red");
    cout << list.front();

    list.push_front("blue");
    cout << list.front();

    list.push_back("green");
    list.push_back("teal");
    //list should be blue ,red, green, teal

    cout << list.find("red");
    cout << list.front();
    list.insert(1, "purple");

    list.pop_front();
    cout << list.front();
}
