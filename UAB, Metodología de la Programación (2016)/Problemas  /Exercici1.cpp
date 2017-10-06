#include <iostream>
using namespace std;
const int N = 5
void invertir(int* vector){
	// también invertir (int vector[])
	int i, temp;
	for (i = 0; i < N/2; i++){
		temp = vector[i];
		vector[i] = vector[N-i-1];
		vector[N-i-1] = temp;
	}
}

int main (){
	int vector[N], i;
	for (i = 0; i<N; i++ ){
		cin >> vector[i];
	}
	invertir(vector);
	cout << "<resoult>"; // Para que lo corrija el corrector automático del Campus Virtual...
	for (i = 0; i<N; i++ ){
		cout << vector[i] << "#";
	}
	return 0;
}