#//#include "List.cpp"
#include "List.h"
#ifndef STACK_H
#define STACK_H
/*
this is a linked list implementation of a stack data type
*/
class Stack
{
    private:
    List stackList;
    
	
    public: // this is where functions are used to manipulate private data
   	Stack();
   	void Push(int data);
   	int Pop();
   	int Top();
   	int GetSize();
   	bool IsEmpty();
   	bool IsFull();
   	
   	
   	/*
   	void AddNode(int addData);
   	void DeleteNode(int delData);
   	void PrintList();
	*/
};
#endif 

//LINK_H
