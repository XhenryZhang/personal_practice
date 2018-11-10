#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

struct LinkedList {
	Node* head;
	Node* tail;

}; 

// function creates linked list with first element x and second element y
// returns the head of the linked list
Node* createSmallLinkedListWrong(int x, int y) {
	Node* head = NULL;
	Node n1 = {x, NULL};
	Node n2 = {y, NULL};
	nl.next = &n2;
	head = &n1;
	return head;
}

Node* createSmallLinkedListRight(int x, int y) {
	Node* head = NULL; // head can be on the stack, because we are returning it.
	// nodes have to be created on the heap
	head = new Node; // first node, which is created on heap
	head -> data = x;
	head -> next = new Node; // creates a new node and assigns the location to head.next
	head -> next -> data = y; // intialize the value of the next Node
	head -> next -> next = NULL; // sets whatever is after that to NULL
	return head;
}

// however, this is created on the stack, so the linked list will get yeeted when printLinkedList is calledWr

// delete values in the node 
void freeList(Node* head) {


}

// adds new node with data x at the start of the linked list
Node* insertNode(Node* head, int x){
	Node* newHead = NULL;
	newHead = new Node;
	newHead -> data = x;
	newHead -> next = head;
	return newHead;
}

void printLinkedList(Node* head) {
	Node* p = head; // p is a traversal pointer, IF YOU PASS IN LINKED LIST STRUCTURE, IT WOULD CHANGE HEAD IF P ISN'T PRESENT
	while(p) {
		cout << p -> data << endl;
		p = p -> next;
	
	}

}

int main() {
	LinkedList l1;
	Node* head;
	head = createSmallLinkedList(10, 20);
	head = insertNode(head, i*100);
}

