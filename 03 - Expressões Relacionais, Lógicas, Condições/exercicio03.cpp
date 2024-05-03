/*  
Lista 3 - Exercício 3
Autor: Pedro Henrique Dias Avelar
Data: 25/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    int numero = 0;
    int d1 = 0;
    int d2 = 0;
    int d3 = 0;
    int d4 = 0;
    int d5 = 0;

    cout << "Digite um numero de 5 digitos: ";
    cin >> numero;

    if ((numero <= 9999) || (numero > 99999))
    {
        cout << "O numero nao possui 5 digitos.";
        return 0;
    };

    d5 = numero % 10;
    numero /= 10;
    d4 = numero % 10;
    numero /= 10;
    d3 = numero % 10;
    numero /= 10;
    d2 = numero % 10;
    numero /= 10;
    d1 = numero;
    
    cout << "d1: " << d1 << " d2: " << d2 << " d3: " << d3 << " d4: " << d4 << " d5: " << d5 << "\n";
    if ((d1 == d5) && (d2 == d4)){
        cout << "O numero eh um palindromo!";
    } else {
        cout << "O numero nao eh um palindromo!";
    };

     return 0;
}
