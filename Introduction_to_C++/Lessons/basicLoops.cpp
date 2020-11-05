// 
#include <iostream>
using namespace std;

int main(){

	int Counter;
	Counter = 0;

	// While 
	while (Counter < 15){
		cout << Counter << endl;
		Counter++;
	}

	// doWhile: executes once before check the condition
	bool isHappy = true;
	char input = ' ';
	do{
		cout << ":D" << endl;
		cout << "Are you still happy? (T/F)" << endl;
		cin >> input;
		if (input == 'F'){
			isHappy = false;
			cout << ":(" << endl;
		}

	}while(isHappy == true);
	
	// for 
	for (int i = 0; i < 10; i++){ 
		cout << i << endl;
	}


	return 0;
}
