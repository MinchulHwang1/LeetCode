#ifndef _NODE_H
#define _NODE_H

#pragma once
#include <iostream>
#include <new>

using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int data);
};

#endif _NODE_H_