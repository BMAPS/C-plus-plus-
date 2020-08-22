#include <iostream>
#include "List.h"
#include "Stack.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Stack gamer;
	gamer.Push(7);
	gamer.Push(7);
	gamer.Push(7);
	gamer.Push(3);
	int ok = gamer.Pop();
	std::cout << ok << std::endl;			
	return 0;
}
