/*  
Lista 4 - Exercício 1b
Autor: Pedro Henrique Dias Avelar
Data: 12/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    float numero = 0;
    float fatorial = 0;
    float gd_numero = 0;
    float neper = 1;


    for (int i = 1; i <= 10; i++)
    {
        numero = i;
        fatorial = i;
        while (fatorial > 1) {
            fatorial --;
            numero *= fatorial;
        };
        neper += (1/numero);
    };
    
    cout << "e = " << neper << ".";

    return 0;
}
