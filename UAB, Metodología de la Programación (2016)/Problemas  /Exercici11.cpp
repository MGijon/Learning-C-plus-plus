#include <iostream>
using namespace std;
const int MAX = 5;
typedef struct{
	float real;
	float imaginari;
} Complex;
void llegeixComplex (Complex& c){      // Paso el complejo por referencia... Obviamente!!
	cin >> c.real;
	cin >> c.imaginari;
}
int main(){
	Complex arrayComplex[MAX];
	Complex suma = {0,0};
	for (int i = 0; i < MAX; i++){
		llegeixComplex(arrayComplex[i]);
	} 
	for (int i = 0; i < MAX; i++){
		suma.real += arrayComplex[i].real;
		suma.imaginari += arrayComplex[i].imaginari;
	} 
	cout << "<resoult>";
	cout << suma.real << "#" << suma.imaginari;
	return 0;
}
