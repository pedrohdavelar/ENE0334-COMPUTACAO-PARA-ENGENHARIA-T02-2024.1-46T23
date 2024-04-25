/*  
Exercício #07 - Fundamentos
Autor: Pedro Henrique Dias Avelar
Data: 31/03/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    
    int x = 0;
    bool eh_primo = true; 
    cout <<"Por gentileza, informe um número inteiro.\n";
    cout <<"Número : ";
    cin >> x;
    
    if (x<=1) {
        cout <<"Números menores ou iguais a 1 não podem ser primos\n";
    };

    for (int i = 2; i*i <= x; i++){
        if (x%i == 0) //caso sim, foi encontrado um divisor para o número
        eh_primo = false;
        break;
    } 
    
    if (eh_primo == false){
        cout << x << " não é um número primo!";
    }else {
        cout << x << " é um número primo!";
    };
    
    return 0;
}
