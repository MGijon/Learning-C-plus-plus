/*Escriure un programa que, donat el número d'operacions N 
que volem calcular, ens mostri la sèrie de totes les possibles 
sumes des de 1 fins a i, i<=N en el següent format (suposem N = 3):
1=1#1+2=3#1+2+3=6# */

#include <iostream>
using namespace std;

void sumas(int N)
{
    for (int i = 1; i <= N; i++)
    {
        int valor_suma = 0;
        for (int j = 1; j <= i-1; j++)
        {
            cout << j << "+";
            valor_suma += j;
        }
        valor_suma+= i;
        cout << i << "=" << valor_suma << "#";
    }
}

int main()
{
    int N;
    cin >> N;
    sumas(N);
    return 0;
}