#include <iostream>
using namespace std;
// Recibir 3 números y ordenarlos en orden creciente:
void ordenar(int &a, int &b, int &c){
	int temporal;
	if (a<b){
		a = a;
		b = b;
	}
	else {
		temporal = b;
		b = a;
		a = temporal;
	}
	if (b<c){
		b = b;
		c = c;
	}
	else{
		temporal = c;
		c = b;
		b = temporal;
	}
}
int main(){
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	ordenar(a,b,c);
	cout << "<result>";
	cout << a << "#" << b << "#" << c << "#";
	return 0;
}