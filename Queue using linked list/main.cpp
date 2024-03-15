#include <iostream>

using namespace std;
struct node {
	int data;
	node* next;
};

class Queue {
	node* front;
	node* last;
public:
	Queue() : front(nullptr) , last(nullptr) {  }
	void enqueue(int x);
	int dequeue();
	~Queue();
};
void Queue::enqueue(int x) {
	if (front == nullptr) {
		last = new node;
		last->data = x;
		last->next = nullptr;
		front = last;
	}
	else {
		node* nnode = new node;
		nnode->data = x;
		nnode->next = nullptr;
		last->next = nnode;
		last = nnode;
	}
}
int Queue::dequeue() {
	if (front == nullptr)
		exit(-1);
	node* nnode= front;
	int n = nnode->data;
	front = front->next;
	delete nnode;
	return n;
}
Queue::~Queue() {
	while (front) {
		node* nnode = front;
		front = front->next;
		delete nnode;
	}
}
int main() {
	
	return 0;
}