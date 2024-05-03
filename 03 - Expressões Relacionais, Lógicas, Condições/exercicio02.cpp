/*  
Lista 3 - Exercício 2
Autor: Pedro Henrique Dias Avelar
Data: 25/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    float preco_alcool = 0;
    float preco_gasolina = 0;
    cout << "Qual o preco do etanol: ";
    cin >> preco_alcool;
    cout << "Qual o preco da gasolina: ";
    cin >> preco_gasolina;
    
    if ((preco_alcool/preco_gasolina)<=0.7) {
        cout << "Vale a pena abastecer com etanol.";
    } else {
        cout << "Vale a pena abastecer com gasolina.";
    };
    return 0;
}
