/*********************************************************************
** Program Filename: nodeFunctions.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-13
** Description: nodeFunctions header file CS199_400 Lab06 project
*********************************************************************/

#ifndef NODEFUNCTIONS_HPP
#define NODEFUNCTIONS_HPP

//includes
#include "node.hpp"


void displayList(Node* &head);
void addValue(Node* &head, int valueIn);
void removeLast(Node* &head);
void destroyList(Node* &head);
Node* findLast(Node* &head);

#endif





