/* Escriure un programa que calculi el valor absolut de 
la diferència de dos números donats. Crear primer la funció "absolut", 
la qual rep un número enter i retorna el seu valor absolut. 
El programa principal ha de llegir els dos números, calcular el valor
 absolut de la diferència cridant a la funció "absolut" i mostrar 
 el resultat per pantalla. */

#include <iostream>
using namespace std;

// Los supondré enteros.

int absolut(int a, int b)
{
    if (a-b < 0)
    {
        return b-a;
    }
    else
    {
        return a-b;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << absolut(a, b);
}

