#include "single_linked_list.h"

using namespace std;

template <typename Item_Type>
KW::Single_Linked_List<Item_Type>::~Single_Linked_List() {

}

template <typename Item_Type>
void KW::Single_Linked_List<Item_Type>::push_front(const Item_Type& item) {
    Node* new_node = new Node(item);
    if (empty()) {
        headPtr = tailPtr = new_node;
    }
    else {
        new_node->next = headPtr;
        headPtr = new_node;
    }
    ++num_items;
}

template <typename Item_Type>
Item_Type KW::Single_Linked_List<Item_Type>::front() const {
    return headPtr->data;
}


template <typename Item_Type>
bool KW::Single_Linked_List<Item_Type>::empty() const {
    return;
}