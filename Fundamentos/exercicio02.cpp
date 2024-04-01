/*  
Exercício #02 - Fundamentos
Autor: Pedro Henrique Dias Avelar
Data: 31/03/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    float x,y = 0; //Declaração e inicialização de variáveis
    
    cout <<"Por gentileza, informe dois números\n";
    cout <<"Primeiro Número : ";
    cin >> x;
    cout <<"Segundo Número : ";
    cin >> y;
    cout << "Soma : " << x+y << "\nProduto : " << x*y << "\nDiferença : " << x-y << "\nQuociente : " << x/y; 
    return 0;
}
