/*  
Lista 3 - Exercício 8
Autor: Pedro Henrique Dias Avelar
Data: 25/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    float n1 = 0;
    float n2 = 0;
    char operador = ' ';

    cout << "Digite o 1o numero: ";
    cin >> n1;
    cout << "Digite o 2o numero: ";
    cin >> n2;
    cout << "Digite o operador (+,-,*,/): ";
    cin >> operador;

    switch (operador){
        case '+':
            cout << "Resultado: " << n1 << " + " << n2 << " = " << n1+n2;
            break;
        case '-':
            cout << "Resultado: " << n1 << " - " << n2 << " = " << n1-n2;
            break;
        case '*':
            cout << "Resultado: " << n1 << " * " << n2 << " = " << n1*n2;
            break;
        case '/':
            if (n2 == 0){
                cout << "Voce tentou uma divisao por zero!!!";
                return 0;
            }
            cout << "Resultado: " << n1 << " / " << n2 << " = " << n1/n2;
            break;
        default:
            cout << "Operador Invalido";
    };
    return 0;
}
