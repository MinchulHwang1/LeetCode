#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

#pragma once
#include<iostream>
#include"Node.h"

class LinkedList {
private:
	Node* head;
	int size;
	const int maxSize = 3; 

public:
	LinkedList();
	~LinkedList();

	int add(int data);
	void printList();
	
	int toNumber();
	LinkedList reverse();
	LinkedList splitNumberIntoList(int number);
};

#endif _LINKEDLIST_H_