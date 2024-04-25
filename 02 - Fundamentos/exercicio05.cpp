/*  
Exercício #05 - Fundamentos
Autor: Pedro Henrique Dias Avelar
Data: 31/03/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    
    float l,c = 0;    
    cout <<"Por gentileza, informe a largura e o comprimento, em metros, da sala.\n";
    cout <<"Largura (m) : ";
    cin >> l;
    cout <<"Comprimento (m) : ";
    cin >> c;
        cout << "A área da sala é: " << l*c << "m" ; 
    return 0;
}
