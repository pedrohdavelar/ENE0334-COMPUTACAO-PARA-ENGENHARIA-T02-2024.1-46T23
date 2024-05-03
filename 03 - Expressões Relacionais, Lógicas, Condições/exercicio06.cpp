/*  
Lista 3 - Exercício 6
Autor: Pedro Henrique Dias Avelar
Data: 25/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    int l1 = 0;
    int l2 = 0;
    int l3 = 0;

    cout << "Dimensao 1o lado : ";
    cin >> l1;
    cout << "Dimensao 2o lado : ";
    cin >> l2;
    cout << "Dimensao 3o lado : ";
    cin >> l3;

    if ((l1 == l2) && (l1 == l3)){
        cout << "Os tres lados sao iguais e o triangulo eh equilatero.";
    } else if ((l1 == l2) || (l1 == l3) || (l2 == l3)) {
        cout << "Dois lados sao iguais e o triangulo eh isoceles";
    } else {
        cout << "Nenhum lado eh igual e o triangulo eh escaleno";
    };
    return 0;
}
