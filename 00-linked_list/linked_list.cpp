#include <iostream>

class Node
{
    public:
        int data;
    Node *next;
};

void print_list(Node * n)
{
    while(n != NULL){
        std::cout << "Print LL: " << n->data << "\n";
        n = n->next;
    }
}

void push_top(Node ** head, int data){
    Node *new_head = NULL;
    new_head = new Node();
    new_head->data = data;
    new_head->next = *head;
    *head = new_head;
}

void append_bottom(Node ** head, int data){
    Node *new_bottom = NULL;
    Node *bottom = *head;
    new_bottom = new Node();
    new_bottom->data = data;
    while(bottom->next != NULL){
        bottom = bottom->next;
    }
    bottom->next = new_bottom;
}

void reverse_linked_list(Node ** head)
{
    Node *current = *head;
    Node *prev = NULL; 
    Node *next = NULL;

    while (current != NULL) 
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

int main () {
    int count = 1; 

    Node *head;	
    Node *first = NULL;
	Node *second = NULL;
	Node *third = NULL;
	Node *forth = NULL;
    
    first = new Node(); 
    second = new Node();
    third = new Node();
    forth = new Node();
    
    first->data = 1;
    second->data = 2;
    third->data = 3;
    forth->data = 4;

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = NULL;

    head = first;


	std::cout << "Linked List example\n";
    print_list(head);
	std::cout << "----------------------\n";
    push_top(&head, 55);
    print_list(head);
	std::cout << "----------------------\n";
    append_bottom(&head, 123);
    print_list(head);
    reverse_linked_list(&head);
	std::cout << "-----Reverse?--------------\n";
    print_list(head);
    return 0;
}
