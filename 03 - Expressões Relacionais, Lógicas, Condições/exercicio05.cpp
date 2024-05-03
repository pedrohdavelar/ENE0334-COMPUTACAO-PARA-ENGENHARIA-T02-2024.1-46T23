/*  
Lista 3 - Exercício 5
Autor: Pedro Henrique Dias Avelar
Data: 25/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    char caractere = ' ';
    bool eh_vogal = false;
    cout << "Digite um caractere: ";
    cin >> caractere;

    switch (caractere){
        case 'a':
            eh_vogal = true;
            break;
        case 'e':
            eh_vogal = true;
            break;
        case 'i':
            eh_vogal = true;
            break;
        case 'o':
            eh_vogal = true;
            break;
        case 'u':
            eh_vogal = true;
            break;
        default:
            eh_vogal = false;
    };

    if (eh_vogal){
        cout << "O caractere eh uma vogal!";
    } else {
        cout << "O caractere nao eh uma vogal!";
    };
    return 0;
}
