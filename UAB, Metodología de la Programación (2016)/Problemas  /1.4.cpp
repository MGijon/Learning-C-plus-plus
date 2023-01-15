/*Escriure una funció que ens retorni el més gran 
de tres números que rep com a paràmetres. Escriure 
després el programa principal que llegeix tres números 
per teclat, crida a la funció anterior i escriu per pantalla 
quin és el més gran. */

#include <iostream>
using namespace std;

void ordenacion(int& a, int& b, int& c)
{
    // Devuelvo en el valor de 'a' el número mayor.
    if (a < b)
    {
        if (b <c){
            a = c;
        }
        else
        {
            a = b;
        }
    }
    else
    {
        if (a < c){
            a = c;
        }
    
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    ordenacion(a, b, c);
    cout << a;
}