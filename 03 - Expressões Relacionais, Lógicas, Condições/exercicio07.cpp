/*  
Lista 3 - Exercício 7
Autor: Pedro Henrique Dias Avelar
Data: 25/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    int senha = 0;
    cout << "Digite a senha: ";
    cin >> senha;

    switch (senha){
        case 1234:
            cout << "ACESSO PERMITIDO";
            break;
        default:
            cout << "ACESSO NEGADO";
    };
    return 0;
}
