#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <cstdlib>		// size_t

class Node
{
	public:
		typedef double value_type;
	
		Node(const value_type& data, Node* link)
		{
			data_field = data;
			link_field = link;
		}

		Node* link() { return link_field; }
		void set_data(const value_type& new_data) {data_field = new_data;}
		void set_link(Node* new_link) { link_field = new_link; }

		value_type getData() const { return data_field; }
		const Node * getLink() const { return link_field; } 

	private:
		value_type data_field;
		Node *link_field;
};

void list_insert(Node* previous_ptr, const Node::value_type& entry);
void list_remove(Node* previous_ptr);
void list_print(Node * head_ptr);
Node* list_search(Node* head_ptr, const Node::value_type& target);
std:: size_t list_length(const Node* head_ptr);

#endif
















