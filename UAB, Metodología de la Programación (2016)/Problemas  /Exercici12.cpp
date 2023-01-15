#include <iostream>
using namespace std;
const int tope = 7
// Fichas del dominó:
typedef struct{
	int A;
	int B;
} Ficha;
// Rellenar cada una de las fichas de la mano del jugador:
void Fichas(Ficha ManoJugador[tope]){
	for (int i = 0; i<tope; i++){
		cin >> ManoJugador[i].A;
		cin >> ManoJugador[i].B;
	}
}
// Función Main: retornará "S" si puedo hacer un movimiento, "N" en caso contrario:
int main(){
	int Extremo1, Extremo2;
	cin << Extremo1;
	cin << Extremo2;
	char respuesta = 'N';
	Ficha ManoJugador[tope];
	Fichas(ManoJugador); // introduzco las fichas...
	for (int i = 0; i< tope; i++){
		if ( Extremo1 == ManoJugador[i].A){
			respuesta = 'S';
		}
	}
	for (int i = 0; i<tope; i++){
		if ( Extremo1 == ManoJugador[i].B){
			respuesta = 'S;'
		}
	}
	for (int i = 0; i< tope; i++){
		if ( Extremo2 == ManoJugador[i].A){
			respuesta = 'S';
		}
	}
	for (int i = 0; i<tope; i++){
		if ( Extremo2 == ManoJugador[i].B){
			respuesta = 'S;'
		}
	}
	cout << "<result>";
	cout << respuesta;
}