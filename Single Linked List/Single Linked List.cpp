#include <iostream>
using namespace std;

template <typename Item_Type>
class Single_Linked_List {
public:
    Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {}

    void push_front(const Item_Type& item) {
        head = new Node(item, head);
        if (tail == nullptr) tail = head;
        num_items++;
    }

    void push_back(const Item_Type& item) {
        Node* new_node = new Node(item, nullptr);
        if (tail == nullptr) {
            head = tail = new_node;
        }
        else {
            tail->next = new_node;
            tail = new_node;
        }
        num_items++;
    }

    Item_Type pop_front() {
        if (head == nullptr) {
            throw out_of_range("pop from empty list");
        }
        Item_Type item = head->item;
        Node* old_head = head;
        head = head->next;
        delete old_head;
        if (head == nullptr) {
            tail = nullptr;
        }
        num_items--;
        return item;
    }

    Item_Type pop_back() {
        if (tail == nullptr) {
            throw out_of_range("pop from empty list");
        }
        Item_Type item;
        if (head == tail) {
            item = head->item;
            delete head;
            head = tail = nullptr;
        }
        else {
            Node* current = head;
            while (current->next != tail) {
                current = current->next;
            }
            item = tail->item;
            delete tail;
            tail = current;
            tail->next = nullptr;
        }
        num_items--;
        return item;
    }

    Item_Type front() const {
        if (head == nullptr) {
            throw out_of_range("front of empty list");
        }
        return head->item;
    }

    Item_Type back() const {
        if (tail == nullptr) {
            throw out_of_range("back of empty list");
        }
        return tail->item;
    }

    bool empty() const {
        return head == nullptr;
    }

    void insert(size_t index, const Item_Type& item) {
        if (index >= num_items) {
            push_back(item);
        }
        else if (index == 0) {
            push_front(item);
        }
        else {
            Node* current = head;
            for (size_t i = 0; i < index - 1; i++) {
                current = current->next;
            }
            current->next = new Node(item, current->next);
            num_items++;
        }
    }

    bool remove(size_t index) {
        if (index >= num_items) {
            return false;
        }
        else if (index == 0) {
            pop_front();
            return true;
        }
        else {
            Node* current = head;
            for (size_t i = 0; i < index - 1; i++) {
                current = current->next;
            }
            Node* node_to_remove = current->next;
            current->next = node_to_remove->next;
            if (node_to_remove == tail) {
                tail = current;
            }
            delete node_to_remove;
            num_items--;
            return true;
        }
    }

    size_t find(const Item_Type& item) const {
        Node* current = head;
        size_t index = 0;
        while (current != nullptr && current->item != item) {
            current = current->next;
            index++;
        }
        return current == nullptr ? num_items : index;
    }
