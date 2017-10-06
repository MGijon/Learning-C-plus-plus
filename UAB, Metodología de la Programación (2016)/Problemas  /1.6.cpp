/*Escriure una funció que ens escrigui la taula de multiplicar
 d'un número donat que es passa com a paràmetre. La funció no
  ha de retornar res. El format de sortida ha de ser:
3*1=3#3*2=6#...#3*10=30#
Escriure el programa principal que llegeixi per teclat un número
 i cridi a la funció anterior per mostrar la taula de multiplicar 
 d'aquest número. */

#include <iostream>
using namespace std;

void tablaMultiplicar(int a)
{
    for (int i = 0; i <= 10; i++)
    {
        cout << a << "*" << i << "=" << a*i << "#";
    }
}

int main()
{
    int a;
    cin >> a;
    tablaMultiplicar(a);
    return 0;
}

