#include <iostream>
#include <ctime>
#include <cmath>
#include "MergeSorter.h"
#include "QuickSearcher.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
//	cout << ceil((1/2));
	
		char A[10];
    char B[10];
  srand((unsigned) time(0));
  int randomNumber;
  cout << "A array ";
  for (int index = 0; index < 10; index++) {
    randomNumber = (rand() % 26) + 97;
    A[index] = randomNumber;
    cout << A[index];
	}
	cout << endl;
	TopDownMergeSort(A, B, 10);
	cout << "sorted array ";
	for (int index = 0; index < 10; index++) {
    //randomNumber = (rand() % 122) + 97;
   // B[index] = randomNumber;
   int temp = A[index];
    cout << temp << " ";
	}
	cout << endl;
	for (int index = 0; index < 10; index++) {
    //int temp = A[index];
    cout << A[index] << " ";
	}
	cout << endl;
	cout << "enter the single character you want to search for: ";
	char input;
	
			cin >> input;
			cout<< input << endl;
			QuickSearch(A,  10, input);
 try{
 
	}
	catch(char e){
		cout << "ERROR";
	}
	

	return 0;
}
