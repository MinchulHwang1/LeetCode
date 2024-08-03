#include<iostream>
#include"Node.h"
#include"LinkedList.h"

int main() {
	LinkedList list1;
	LinkedList list2;
	int input;

	cout << "Input 3 numbers of first list:" << endl;
	for (int i = 0; i < 3; ++i) {
		cin >> input;
		list1.add(input);
	}
	cout << "Your first list is : ";
	list1.printList();

	LinkedList reversedList1 = list1.reverse();
	cout << "Your first list of reverse is : ";
	reversedList1.printList();

	/////////////////////////////
	cout << "Input 3 numbers of second list:" << endl;
	for (int i = 0; i < 3; ++i) {
		cin >> input;
		list2.add(input);
	}
	cout << "Your second list is : ";
	list2.printList();

	LinkedList reversedList2 = list2.reverse();
	cout << "Your second list of reverse is : ";
	reversedList2.printList();
	
	/////////////////////

	
	int firstNumber = reversedList1.toNumber();
	int secondNumber = reversedList2.toNumber();

	int sum = firstNumber + secondNumber;

	cout << endl;
	cout << "The sum is : " << sum << endl;
	cout << endl;

	LinkedList sumList = sumList.splitNumberIntoList(sum);
	sumList.printList();

	return 0;
}
