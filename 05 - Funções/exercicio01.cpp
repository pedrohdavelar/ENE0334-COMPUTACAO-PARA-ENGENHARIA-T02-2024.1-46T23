/*  
Lista 5 - Exercício 1
Autor: Pedro Henrique Dias Avelar
Data: 25/04/2024
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// funcao de conversao de Celsius para Fahrenheit
float c2f (float t_c);



//início da função principal
int main (){
   
for (int celsius = 0; celsius <= 100; celsius++){
    cout << "TC: " << celsius << " TF: " << fixed << setprecision(1) << c2f(celsius) <<"\n";
};
    return 0;
}


float c2f (float t_c){
    return (32 + 1.8* t_c);
};