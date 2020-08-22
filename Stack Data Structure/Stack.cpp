#include <cstdlib>
#include <iostream>
#include "List.h"
#include "Stack.h"

using namespace std;

Stack::Stack(){ //constructor
//stackList.AddNode(3);
}

void Stack::Push(int data){
stackList.AddNode(data);	
}

int Stack::Pop(){
	int pop = stackList.ReturnCurr();
	stackList.DeleteCurr();
	return pop;
}

bool Stack::IsEmpty(){
	return true;
}

bool Stack::IsFull(){
	return true;
}

int Stack::Top(){
	return stackList.ReturnCurr();
}

int Stack::GetSize(){
	return stackList.GetSize();;
}
