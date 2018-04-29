#pragma once
#include <iostream>
#include "CapListNode.h"

class CapitalList
{
private:
	// to hold the current amount of elements in the list
	int numElements = 0; 
	
	CapListNode *head;

	// Recursive functions for chapter 20 operations
	int countNodes(CapListNode*) const;
	char compareNodes(CapListNode*) const;
public:
	// Constructor
	CapitalList();

	// Destructor
	~CapitalList();

	// Capital list operations
	void append(char);
	int insert(int, char);
	int remove(int);
	int search(char);
	void reverse();
	void print() const;
	int size() const;
	char get(int) const;

	// New operations for chapter 20
	int numNodes() const;
	char maxNode() const;
};