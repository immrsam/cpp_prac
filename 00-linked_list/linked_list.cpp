#include <iostream>

class Node
{
    public:
        int data;
    Node *next;
};

int main () {
    int count = 1; 
    int arr[4] = {1, 2, 3, 4};

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

    while (head->next != NULL){
        std::cout << "LL data: " << head->data << "\n";
        head = head->next;
        count++;
    }
    std::cout << "LL data: " << head->data << "\n";
    std::cout << "Total list size = " << count << "\n";
    std::cout << "Size = " << sizeof(Node) << " * " << count << " = " << sizeof(Node) * count << "\n";
    std::cout << "Size of array = " << sizeof(arr) <<  "\n";



    return 0;
}
