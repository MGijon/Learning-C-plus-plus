#include <iostream>
using namespace std;
const int N = 4
void iniMatriu(int** matriz, int x){
	// inicializamos la matriz...
	// también iniMatriu(int matriz[N][N], int x)
	int i,j;
	for (i = 0, i<N; i++){
		for (j = 0; k<N; j++){
			matriz[i][j] = i * j * x;
		}
	}
}

int main(){
	int matriz[N][N], i, j, x;
	cin >> x;
	iniMatriu(matriz, x);
	cout << "<resoult>";
	for (i = 0, i<N; i++){
		for (j = 0; k<N; j++){
			cout << matriz[i][j] << "#";
		}
		cout << "#";
	}
	return 0;
}