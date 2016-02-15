/*********************************************************************
** Program Filename: node.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-13
** Description: node struct header file CS199_400 Lab06 project - Winter 2016
*********************************************************************/

#ifndef NODE_HPP
#define NODE_HPP

struct Node
{
	int value;
	Node* prev;
	Node* next;
};

#endif