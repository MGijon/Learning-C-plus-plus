#include <iostream>
using namespace std;

int MesGrand(int &a, int &b, int &c){
	int grande;
	if (a>b){
		if (a>c) return a;
		else return c;
	}
		
	else {
		if (b>c) return b;
		else return a;
	}
}
int main(){
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "<result>";
	cout << MesGrand(a,b,c);
	return 0;
}