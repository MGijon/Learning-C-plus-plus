#include <iostream>
using namespace std;
const int N = 5;

void Minimo(int* vector, int &minimo, int &posicion){
	minimo = vector[0];
	posicion = 0;
	for (int i = 1; i<N; j++){
		if (vector[i] < minimo){
			minimo = vector[i];
			posicion = i;
		}
	}
}
int main(){
	int minimo, posicion;
	int vector[N];
	for (int i = 0; i<N; i++){
		cin >> vector[i];
	}
	Minimo(vector, minimo, posicion);
	cout << "<result>";
	// minimo # posicion
	cout << minimo << "#" << posicion; 
}