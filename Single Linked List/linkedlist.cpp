#include "linkedlist.h"

using namespace std;

template <typename Item_Type>
Single_Linked_List<Item_Type>::Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {}

template <typename Item_Type>
Single_Linked_List<Item_Type>::~Single_Linked_List() {
    while (!empty()) {
        pop_front();
    }
}

template <typename Item_Type>
void Single_Linked_List<Item_Type>::push_front(const Item_Type& item) {
    Node* new_node = new Node(item);
    if (empty()) {
        head = tail = new_node;
    }
    else {
        new_node->next = head;
        head = new_node;
    }
    ++num_items;
}

template <typename Item_Type>
void Single_Linked_List<Item_Type>::push_back(const Item_Type& item) {
    Node* new_node = new Node(item);
    if (empty()) {
        head = tail = new_node;
    }
    else {
        tail->next = new_node;
        tail = new_node;
    }
    ++num_items;
}

template <typename Item_Type>
void Single_Linked_List<Item_Type>::pop_front() {
    if (empty()) {
        return;
    }
    Node* old_head = head;
    head = head->next;
    delete old_head;
    --num_items;
    if (empty()) {
        tail = nullptr;
    }
}

template <typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back() {
    if (empty()) {
        return;
    }
    if (head == tail) {
        delete head;
        head = tail = nullptr;
        --num_items;
        return;
    }
    Node* current = head;
    while (current->next != tail) {
        current = current->next;
    }
    delete tail;
    tail = current;
    tail->next = nullptr;
    --num_items;
}

template <typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::front() const {
    return head->data;
}

template <typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::back() const {
    return tail->data;
}

template <typename Item_Type>
bool Single_Linked_List<Item_Type>::empty() const {
    return;
}