/*********************************************************************
 ** Program Filename: nodeFunctions.cpp
 ** Author: Giovanni Rosati
 ** email: rosatig@oregonstate.edu
 ** Date: 2016-02-13
 ** Description: nodeFunctions implementation file CS199_400 Lab06 project
 *********************************************************************/

 //includes
#include "node.hpp"
#include "nodeFunctions.hpp"
#include <cstdlib>
#include <iostream>

//usings
using std::cout;
using std::endl;
using std::cin;

void displayList(Node* &head)
{
	if (head == NULL)
	{
		cout << "There are no items in the list." << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		Node* tempNode = head;
		cout << tempNode->value << endl;	//outputs head nodes value
		while (tempNode->next != NULL)
		{
			tempNode = tempNode->next;		//set tempNode to the next node
			cout << tempNode->value << endl;//outputs nodes after head 
		}
		cout << endl;
	}
}

void addValue(Node* &head, int valueIn)
{
	if (head == NULL)		//case where no nodes exist
	{
		head = new Node;
		head->value = valueIn;
		head->prev = NULL;
		head->next = NULL;
		cout << endl;
	}
	else					//adds a node to the end of the list
	{
		Node* lastNode = findLast(head);
		lastNode->next = new Node;
		lastNode->next->prev = lastNode;
		lastNode->next->value = valueIn;
		lastNode->next->next = NULL;
		cout << endl;
	}
}

void removeLast(Node* &head)	//removes the last node, if any
{
	if (head == NULL)
	{
		cout << "You cannot remove an element from an empty list!" << endl;
		cout << endl;
	}
	else
	{
		Node* lastNode = findLast(head);	//find the last node
		if (lastNode->prev == NULL) head = NULL;	//if it's the first node, set head to NULL
		if (lastNode->prev != NULL)
		{
			lastNode->prev->next = NULL;	//sets "next" on the second to last node to NULL
		}
		delete lastNode;					//deletes the last node
	}
	cout << endl;
}

void destroyList(Node* &head)
{
	if (head == NULL){}
	else
	{
		Node* lastNode = findLast(head);  //set lastNode to the last node
		while (lastNode->prev != NULL)
		{
			Node* tempNode = lastNode;
			tempNode->prev->next = NULL;
			lastNode = lastNode->prev;
			delete tempNode;			//delete the last node
		}
		head = NULL;			//after all nodes but head are deleted, set head to NULL
		delete lastNode;		//delete the only remaining node
	}
}

Node* findLast(Node* &head)
{
	Node* tempNode = head;
	while (tempNode->next != NULL)
	{
		tempNode = tempNode->next;
	}
	return tempNode;
}