/*Donada una quantitat de segons llegida per teclat,
 escriure un programa que ens digui el número d'hores, 
 minuts i segons equivalent. El format de sortida ha de ser: H:M:S. */
#include <iostream>
using namespace std;
int main()
{
    int S, M, auxiliar;
    cout << "Introduce el número de segundos:\n";
    cin >> S;
    auxiliar = S;
    S = S % 60;
    auxiliar -= S;
    auxiliar /= 60;
    M = auxiliar % 60;
    auxiliar -= M;
    auxiliar /= 60;
    cout << auxiliar << ":" << M << ":" << S;
}