/*  
Lista 5 - Exercício 3
Autor: Pedro Henrique Dias Avelar
Data: 02/05/2024
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


bool perfect (int numero);
void fatores (int numero);


//início da função principal
int main (){
   
for (int i = 1; i <= 33550336; i++){
    if (perfect(i)){
        cout << "O numero " << i << " eh perfeito! ";
        fatores (i);
    };
};
    return 0;
}


bool perfect (int numero){
    int soma = 0;
    for (int i = 1; i <= (numero/2); i++){
        if (numero % i == 0){
        soma += i;
        };
    };
    if (soma == numero){
        return true;
    };
    return false;
};

void fatores (int numero){
    cout << "Fatores: ";
    for (int i =1; i <= (numero/2); i++){
        if (numero % i == 0){
            cout << i << " ";
        };
    };
    cout << "\n";
    return;
}; 

