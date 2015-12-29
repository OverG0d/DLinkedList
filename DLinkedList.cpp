#include <iostream>
#include <string>
struct node
{
	int data;
	node *next;
	node *prev;
};
void PrintForward(node* head);
void PrintBackward(node* tail);
int main()
{
	node *head;
	node *tail;
	node *n;
	//Starting node
	n = new node;
	n->data = 1;
	n->prev = NULL; //So it doesn't go beyond the first node
	head = n; //this node is the head of the list
	tail = n; //we create a tail for the list
	//Second node
	n = new node;
	n->data = 2;
	n->prev = tail; //Points to previous node
	tail->next = n; //Points to next node
	tail = n;
	//Third node
	n = new node;
	n->data = 3;
	n->prev = tail;
	tail->next = n;
	tail = n;
	//Fourth node
	n = new node;
	n->data = 4;
	n->prev = tail;
	tail->next = n;
	tail = n;
	tail->next = NULL; //so our list doesn't go beyond the last node
	PrintForward(head);
	PrintBackward(tail);
	return 0;
}
void PrintForward(node* head)
{
	node *temp = head;
	while (temp != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << std::endl;
	std::cin.get();
}
void PrintBackward(node* tail)
{
	node *temp = tail;
	while (temp != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->prev;
	}
	std::cout << std::endl;
	std::cin.get();
}