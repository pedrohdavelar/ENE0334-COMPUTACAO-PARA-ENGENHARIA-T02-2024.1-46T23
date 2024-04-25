/*  
Exercício #06 - Fundamentos
Autor: Pedro Henrique Dias Avelar
Data: 31/03/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    
    int x,y = 0;    
    cout <<"Por gentileza, informe dois números inteiros.\n";
    cout <<"1o número : ";
    cin >> x;
    cout <<"2o número : ";
    cin >> y;

    if (x%y==0){
        cout << x << " é um múltiplo de " << y << ".";
    } 
    else {
        cout << x << " não é um múltiplo de " << y << ".";
    }
    return 0;
}
