#include <iostream>
using namespace std;
// Retorna un 1 si el número es perfecto y un 0 si no.
int esPerfecte(int a){
	int suma=0;
	for (int i = 0; i < a; i++){
		if ( i%a == 0){
			suma += i;
		}
	}
	if ( suma == a){
		return 1;
	}
	else 
		return 0;
}
int main(){
	int N;
	cin >> N;
	for (int j = 0; j <= N; j++){
		if ( esPerfecte(j) == 1 ){
			cout << "<result>";
			cout << j << "#";
		}
	}
	return 0;
}