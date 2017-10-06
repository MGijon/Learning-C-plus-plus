/*Donats dos números naturals diferents de 0, 
escriure una funció que ens digui si el primer número 
és divisible pel segon. La funció rep els dos números 
com a paràmetres i retorna un booleà. Escriure també 
el programa principal que llegeix els dos números per teclat
 i crida a la funció anterior per saber si el primer número
  és divisible pel segon. La sortida del programa ha de ser S o N. */

#include <iostream>
using namespace std;

bool divisible(int a, int b)
{
    bool div;
    if (a % b == 0)
    {
        div = true;
    }
    else
    {
        div = false;
    }
    return div;
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (divisible(a, b))
    {
        cout << "S";
    }
    else
    {
        cout << "N";
    }
}