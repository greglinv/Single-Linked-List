
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;



namespace KW {
	template <typename Item_Type>
	class Single_Linked_List {
	private:

		struct Node {
			Item_Type data;
			Node* next;

			Node(const Item_Type& data_item, Node* next_ptr = NULL) :data(data_item), next(next_ptr) {}
		};

		Node* headPtr;
		Node* tailPtr;
		std::vector<Item_Type> container;
		size_t num_items;

	public:

		Single_Linked_List() : headPtr(nullptr) {}
		~Single_Linked_List() {}

		void push_front(const Item_Type& item);
		Item_Type front() const;
		bool empty() const;

	};


}

template<typename Item_Type>
KW::Single_Linked_List<Item_Type>::Single_Linked_List(){}


template <typename Item_Type>
void KW::Single_Linked_List<Item_Type>::push_front(const Item_Type& item) {
	container.push_front(item);
}

template <typename Item_Type>
Item_Type KW::Single_Linked_List<Item_Type>::front() const {
	return container.front();
}
