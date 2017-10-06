#include <iostream>
using namespace std;
const int N = 4
void inicializacion(int matriz[N][N], int x){
	int i, j, sumando = 1;
	for (i = 0; i<N; i++){
		for (j = 0; j<N; j++){
			matriz[i][j] = x + sumando; 
			sumando++;
		}
	}
}
int main(){
	int matriz[N][N];
	int x, i, j;
	cin >> x;
	inicializacion(matriz, x);
	cout << "<result>";
	for (i = 0; i<N; i++){
		for (j = 0; j<N; j++){
			cout << matriz[i][j] << "#";
		}
		cout << "#";
	}

}
/*
#include <stdio.h>
int N = 4;
void inicializacion(int matriz[N][N], int x){
    int i, j, sumando = 1;
    for (i = 0; i<N; i++){
        for (j = 0; j<N; j++){
            matriz[i][j] = x + sumando; // VIGILAR ÍNDICES!!
            sumando++;
        }
    }
}

int main(){
    int matriz[N][N];
    int x, i, j;
    scanf("%d", &x);
    inicializacion(matriz, x);
    for (i = 0; i<N; i++){
        for (j = 0; j<N; j++){
            printf("%d",matriz[i][j]);
            printf("#");
        }
    printf("#");
    }
}
*/