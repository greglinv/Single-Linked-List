#pragma once

#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include <cstddef>
#include <string>

using namespace std;

template <typename Item_Type>
class Single_Linked_List {
public:

    Single_Linked_List();
    ~Single_Linked_List();

    void push_front(const Item_Type& item);
    //Pre: Take in an item
    //Post: Add item to front of list

    void push_back(const Item_Type& item);
    //Pre: Take in an item
    //Post: Add item to bakc of list

    void pop_front();
    //Pre: none
    //Post: Remove an Item from the front of the list

    void pop_back();
    //Pre: none
    //Post: Remove an Item from the back of the list

    Item_Type front() const;
    //Pre: none
    //Post: Reture an Item from the front of the list

    Item_Type back() const;
    //Pre: none
    //Post: Reture an Item from the back of the list

    bool empty() const;
    //Pre: none
    //Post: return if the List is empty or not

    void insert(size_t index, const Item_Type& item);
    //Pre: Take in an item and an index
    //Post: Insert item at the specified index

    bool remove(size_t index);
    //Pre: Take in an index
    //Post: Remove the item at the specified index

    size_t find(const Item_Type& item) const;

private:
    struct Node {

        Item_Type data;

        Node* next;

        Node(const Item_Type& item) : data(item), next(nullptr) {}

    };

    Node* head;

    Node* tail;

    size_t num_items;

};

#endif