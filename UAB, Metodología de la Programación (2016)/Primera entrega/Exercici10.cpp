#include <iostream>
using namespace std;
// Representación binaria inversa de un número:
int main(){
	int numero;
	cin >> numero;
	cout << "<result>";
	while (numero != 1){
		int temporal;
		temporal = numero%2;
		cout << temporal << "#";
		numero = numero \ 2;    // DIVISIÓN ENTERA;
	}
	cout << "#";
	return 0;
}