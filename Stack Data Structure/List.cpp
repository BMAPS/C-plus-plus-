#include <cstdlib>
#include <iostream>
#include "List.h"

using namespace std;

List::List(){ // constructor
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void List::AddNode(int addData){
	nodePtr n = new node; //dinamic mem allocation
	n-> next = NULL;
	n-> data = addData;
	
	
	if (head != NULL){ //already got a list set up and if so set the current pointer point to the front of the list
		curr = head;
		while(curr-> next != NULL){ //advances current pointer until it gets to the last elemenent of the list 
			curr = curr -> next;
		}
		curr -> next = n; // the next element = n the new node that points to NULL and can exit properly
	}
	else{ // if a list exists already then advance the current pointer to the front to the last node when it gets there connect n the new node to the last node
	//otherwise make the start of the list n
		head = n;
	}
}

void List::DeleteNode(int delData){
	nodePtr delPtr = NULL; //POINTS TO NOTHING..
	temp = head;
	curr = head;
	//start at the beginning of the list and check if the current node is the one we want to delete and if so delete
	//and if not advance the current pointer while still having the temperary pointer trailing along one step at a time to enable patching
	while(curr != NULL && curr -> data != delData){
		temp = curr;
		curr = curr -> next;
	}
		//advance until the value we want to delete is found
		if(curr == NULL){
			cout << delData << " was not in the list\n";
			delete delPtr;
		}
		else{
			//we have found the node with matching data
			delPtr = curr;
			curr = curr -> next;
			temp -> next = curr;
			delete delPtr;
			cout << "the value " << delData << " was deleted \n" ;
		}
	
}

int List::GetSize(){
	temp = head;
	curr = head;
	int size = 0;
	while(curr->next != NULL){
		temp = curr;
		curr = curr -> next;
		size ++;
	}
	return size;
}


int List::ReturnCurr(){
//	cout << curr -> next -> data << endl;
	temp = head;
	curr = head;
	while(curr->next != NULL){
		temp = curr;
		curr = curr -> next;
	}
	if (curr)
return  curr -> data;
}

void List::DeleteCurr(){
	nodePtr delPtr = NULL; //POINTS TO NOTHING..
	temp = head;
	curr = head;
	//start at the beginning of the list and check if the current node is the one we want to delete and if so delete
	//and if not advance the current pointer while still having the temperary pointer trailing along one step at a time to enable patching
	
	while(curr->next != NULL){
		temp = curr;
		curr = curr -> next;
	}
		//advance until the value we want to delete is found
	if(curr == NULL){
			cout <<" error\n";
			delete delPtr;
		}
	else{
			//we have found the node with matching data
			delPtr = curr;
			curr = curr -> next;
			temp -> next = curr;
			delete delPtr;
			cout << "the value " << delPtr -> data <<" current deleted \n" ;
		}
	
}


void List::PrintList(){
	curr = head;
	while(curr != NULL){
		cout<< curr -> data << endl;
		curr = curr -> next;
		
	}
}

