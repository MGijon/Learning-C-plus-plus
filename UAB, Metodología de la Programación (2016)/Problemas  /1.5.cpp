/*Escriure una funció que donats tres números com a paràmetres,
 els ordeni de forma creixent. La funció ha de retornar els valors 
 dels paràmetres modificats en ordre creixent. Escriure després el 
 programa que llegeixi tres números, cridi a la funció anterior per 
 ordenar-los i els escrigui per pantalla ordenats amb aquest format: 1#2#3#
 */

#include <iostream>
using namespace std;

void ordenacion(int& a, int& b, int& c)
{
    // Puesto que no puedo hacerlo elegantemente, lo hará a las bravas...
    int mayor, menor, mediano;
    if (a < b)
    {
        if (b <c){    // a < b < c
            mayor = c;
            mediano = b;
            menor = a;
        }
        else          // a < c < b
        {
            mayor = b;
            mediano = c;
            menor = a;
        }
    }
    else
    {
        if (b < c){  // b < c < a
            mayor = a;
            mediano = c;
            menor = b;
        }
        else         // c < b < a
        {
            mayor = a;
            mediano = b;
            menor = c;
        }
    }
    a = mayor;
    b = mediano;
    c = menor;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    ordenacion(a, b, c);
    cout << c << "#" << b << "#" << a;
}
