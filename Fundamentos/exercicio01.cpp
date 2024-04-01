/*  
Exercício #01 - Fundamentos
Autor: Pedro Henrique Dias Avelar
Data: 31/03/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    int x,y,z = 0; //Declaração e inicialização de variáveis
    
    x = 7 + 3 * 6 / 2 - 1;
    y = 2 % 2 + 2 * 2 / 2;
    z = ( 3 * 9 * (3 + (9 * 3 /(3))));

        cout <<"x: " << x << " y: " << y << "z: " << z;
    return 0;
}
