/*********************************************************************
** Program Filename: lab6.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-13
** Description: Instructor file with main() for CS199_400 Lab06 project
*********************************************************************/

#include <iostream>
#include "node.hpp"
#include "nodeFunctions.hpp"
#include <cstdlib>

void displayMenu();
int getInput();

int main() {
	Node *head = NULL;
	Node *tail = NULL;
	bool done = false;
	int choice = 0;
	int value;
	while (done != true) {
		displayMenu();
		choice = getInput();
		switch (choice) {
		case 1:
			displayList(head);
			break;
		case 2:
			std::cout << "Enter value to add to list: ";
			std::cin >> value;
			addValue(head, value);
			break;
		case 3:
			removeLast(head);
			break;
		case 4:
			done = true;
			break;
		default:
			std::cout << "Not a valid choice" << std::endl;
			break;
		}
	}
	destroyList(head);
}

void displayMenu() {
	std::cout << "What would you like to do?" << std::endl;
	std::cout << "1) Display list" << std::endl;
	std::cout << "2) Add value" << std::endl;
	std::cout << "3) Remove value" << std::endl;
	std::cout << "4) Quit" << std::endl;
}

int getInput() {
	int choice;
	std::cout << "Choice: ";
	std::cin >> choice;
	return choice;
}