#include <iostream>
using namespace std;
// la siguiente función retornará un 1 si el primer número es divisible por el segundo y un 0 si no:
int divisible(int n1, int n2){
	if (n1%n2 == 0) 
		return 1;
	else 
		return 0;
}
int main(){
	int n1, n2, resultado;
	cin >> n1;
	cin >> n2;
	resultado = divisible(n1,n2);
	cout << "<result>";
	if (resultado == 1)
		cout << "S";
	else 
		cout << "N";
	return 0;
}