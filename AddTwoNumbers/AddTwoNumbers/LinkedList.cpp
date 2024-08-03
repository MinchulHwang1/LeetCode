#include"LinkedList.h"
#include<string>

LinkedList::LinkedList() {
	head = nullptr;
	size = 0;
}

LinkedList::~LinkedList() {
	Node* current = head;
	while (current != nullptr) {
		Node* next = current->next;
		delete current;
		current = next;
	}
}

int LinkedList::add(int data) {
	if (size >= maxSize) {
		return 1;
	}

	Node* newNode = new Node(data);

	if (head == nullptr) {
		head = newNode;
	}
	else {
		Node* current = head;
		while (current->next != nullptr) {
			current = current->next;
		}
		current->next = newNode;
	}
	size++;
	return 0;
}

void LinkedList::printList() {
	Node* current = head;
	while (current != nullptr) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}

LinkedList LinkedList::reverse() {
	LinkedList reversedList;
	Node* current = head;

	while (current != nullptr) {
		Node* newNode = new Node(current->data);
		newNode->next = reversedList.head;
		reversedList.head = newNode;

		current = current->next;
	}

	return reversedList;
}

int LinkedList::toNumber() {
	int number = 0;
	Node* current = head;

	while (current != nullptr) {
		number = number * 10 + current->data;
		current = current->next;
	}

	return number;
}

LinkedList LinkedList::splitNumberIntoList(int number) {
	LinkedList list;
	string numstr = to_string(number);

	for (char c : numstr) {
		int digit = c - '0';
		list.add(digit);
	}
	return list;
}