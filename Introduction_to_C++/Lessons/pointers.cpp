// POINTER: variable that contains a memory address. The reference to this memory address can be use to modify the 
// value that contains.
// * : pointer operator.
// & : returns the memory address of a variable.
#include <iostream>
using namespace std;


int main(){
	int A = 3232;

	int* PointerToA; // declare a pointer variable
       	PointerToA = &A;

	cout << A << endl;
	cout << PointerToA << endl;

	*PointerToA = 3;
	cout << A << endl;

	return 0;
}
