// 
#include <iostream>
using namespace std;

int main(){
	int Math = 0;
	int Biology = 0;
	
	cout << "Maths` mark (0 to 10):" << endl;
	cin >> Math;
	cout << "Biology`s mark (0 to 10):" << endl;
	cin >> Biology;
	
	if (Math < 5){
		cout << "Fail in maths!" << endl;
	}
	else if (Math == 10){
	 	cout << "You are a fuc***g genius!!" << endl;
	}	
	else {
		cout << "Congratulations! you have aproved math." << endl;
	}
	
	switch(Biology){
		case 10:
			cout << "10 in Biology... genius!!" << endl;
			break;  // ends this case, if not continue with the next one until arrives to a break
		case 5: 
			cout << "Just a 5... shame" << endl;
			break;
		default:
			cout << "any other case" << endl;
			break;
	}

}
