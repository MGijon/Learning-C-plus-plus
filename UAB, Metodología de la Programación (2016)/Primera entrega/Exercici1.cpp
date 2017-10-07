#include <iostream>
using namespace std;
int absolut(int a){
	if (a<0) return -a;
	else return a;
}
int main(){
	int n1, n2, numero;
	cin >> n1;
	cin >> n2;
	numero = n1-n2;
	cout << "<result>";
	cout << absolut(numero);
	return 0;
}