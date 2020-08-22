#include <cstdlib>
#include <iostream>
#include <cmath>
#ifndef QUICKSEARCHER_H
#define QUICKSEARCHER_H
using namespace std;
void QuickSearch(char *A, int n, char target){
	cout << "starting search boi" << endl;
	//char comp;
	int index = n / 2;
    int rate = n / 2;
	int turns = 0;
	int comp;
	int comp2 = target;
	cout << "target number equivelent: " << comp2 << endl;
	
	while (target != comp && turns <= n){
		if(A[index] != target){
		//	comp = A[index];
	    	cout << "turn " << turns << endl;
			if(A[index] > target){
			//	comp = A[index];
				cout << "< index = " << index << endl;
				cout << A[index] << endl;
				float x = index;
				index = index - ceil(x / 2);
				comp = A[index];
				turns ++;
			}else if (A[index] < target){
			//	comp = A[index];
				cout << "> index =" << index << endl;
					cout << A[index] << endl;
				float x = index;
				index = index + ceil(x / 2);
				comp = A[index];
				turns++;
			}
		}
	}
	if(A[index] == target) {
			cout << "value found: " << A[index] << " at index: " << index;
			comp = A[index];
		}	
}

#endif
