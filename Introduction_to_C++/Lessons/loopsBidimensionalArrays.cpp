// 
#include <iostream>
using namespace std;

int main(){

	// Unidimensional
	string Names[5] = {"John", "Kirk", "Picard", "Pepe", "David"};

	for (int i = 0; i < 5; i++){
		cout << Names[i] << endl;
	}

	// Bidimensional (cols and rows)
	int ids[5][3] = {
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	};
	
	int NumberRows = 3;
	int NumberCols = 5;

	for (int i = 0; i < NumberCols; i++){
	       for (int j = 0; j < NumberRows; j++){
	       		cout << ids[i][j];
	 	}
	       cout << endl;
	}

	return 0;
}
