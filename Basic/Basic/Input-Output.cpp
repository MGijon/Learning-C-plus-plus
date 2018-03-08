//
//  Input-Output.cpp
//  Basic
//
//  Created by Manuel Gijón Agudo on 8/3/18.
//  Copyright © 2018 Manuel Gijón Agudo. All rights reserved.
//

#include <iostream>
using namespace std;

#include <iomanip>  // for 'setprecision'
#include <cmath>    // for mathematical functions as 'pow'

int main(void){
    
    const float PI = 3.141592;
    float radio;
    
    cout << "Introduce el valor del radio\n";
    cin >> radio;
    cout << "\nLongitud de la circunferencia: " << fixed << setprecision(2) << 2 * PI * radio;
    cout << "\nArea del circulo: " << PI * pow(radio,2);
    cout << "\nVolumen de la esfera: " << (4.0/3) * PI * pow(radio,3) << endl;
    system("pause");
}
