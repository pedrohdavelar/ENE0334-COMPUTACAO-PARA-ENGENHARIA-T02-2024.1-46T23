/*  
Lista 4 - Exercício 1a
Autor: Pedro Henrique Dias Avelar
Data: 12/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    int numero = 0;
    int fatorial = 0;
    int gd_numero = 0;
    

    cout << "Número: ";
    cin >> numero;
    fatorial = numero;
    gd_numero = numero;

    if (fatorial < 0) {
        cout << "O fatorial precisa ser maior que zero!";
        return 0;
    }
    
    while (fatorial > 1) {
            fatorial --;
            numero *= fatorial;
    };

    cout << "O fatorial " << gd_numero << "! é igual a " << numero << ".";

    return 0;
}
