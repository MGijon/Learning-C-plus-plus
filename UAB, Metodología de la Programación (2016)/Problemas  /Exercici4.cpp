#include <iostream>
using namespace std;
const int N = 5
void Inicialitzacio(int matriz[N][N], int x){
	// Inicializamos la matriz:
	int i, j;
	for (i = 0; i<N; i++){
		for (j = 0; j<N; j++){
			matriz[i][j] = x + i;
		}
	}

}
int main(){
	int x;
	int matriz[N][N];
	cin >> x;
	Inicialitzacio(matriz, x);
	// Ahora lo mostramos por pantalla:
	cout << "<result>"; 
	for (int i = 0; i<N; i++){
		for (int j = 0; j<N; j++){
			cout << matriz[j][i] << "#";
		}
		cout << "#";
	}
	return 0;
}
/*
//
//  Created by Manuel Gijón Agudo.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>
int N = 5;
void Inicialitzacio(int matriz[N][N], int x){
    // Inicializamos la matriz:
    int i, j;
    for (i = 0; i<N; i++){
        for (j = 0; j<N; j++){
            matriz[i][j] = x + i;
        }
    }
    
}
int main(){
    int x;
    int matriz[N][N];
    scanf("%d", &x);
    Inicialitzacio(matriz, x);
    // Ahora lo mostramos por pantalla:
    //cout << "<result>";
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            printf("%d", matriz[j][i]);
            printf("#");
        }
        printf("#");
    }
    return 0;
}
*/