#include <iostream>
using namespace std;
int main(){
	int a1 = 1, a2 = 1;
	int termino;
	cin >> termino;
	cout << "<result>";
	cout << a1 << "#" << a2 << "#";
	for (int i = 2; i <= tope; i++){
		int temporal = a1;
		a1 = a2;
		a2 = temporal + a1; 
		cout << a2 << "#";
	}
	return 0;
}