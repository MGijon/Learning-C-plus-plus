/*Escriure un programa que, donat un número N més gran que
  2, ens mostri per pantalla els N primers números de la sèrie
  de Fibonacci. Recordeu que la sèrie de Fibonacci es defineix 
  de la següent forma:
a(1)=1
a(2)=1
a(n)=a(n-2)+a(n-1)
El format de sortida ha de ser el següent (suposem N=7): 1#1#2#3#5#8#13# */

#include <iostream>
using namespace std;

void Fibonnaci(int N)
{
    int a1 = 1, a2 = 1;
    cout << a1 << "#" << a2 << "#";
    for (int i = 2; i < N; i++)
    {
        int aux = a1;
        a1 = a2;
        a2 += aux;
        cout << a2 << "#";
    }
}

int main()
{
    int N;
    cin >> N;
    Fibonnaci(N);
    return 0;
}