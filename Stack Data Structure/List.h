//#include "List.cpp"
#ifndef LINK_H
#define LINK_H
class List{
	private:
		typedef struct node{
			int data;
		    node * next; // points to the next node in the linked list
		}*nodePtr;
	//	typedef struct node* nodePtr;
		nodePtr head;
		nodePtr curr;
		nodePtr temp;
	
   public: // this is where functions are used to manipulate private data
   	List();
   	void AddNode(int addData);
   	void DeleteNode(int delData);
   	int ReturnCurr();
   	int GetSize();
   	void DeleteCurr();
   	void PrintList();
	
};
#endif 

//LINK_H
