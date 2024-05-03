/*  
Lista 5 - Exercício 2
Autor: Pedro Henrique Dias Avelar
Data: 02/05/2024
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


bool eh_primo (int numero);

bool eh_primo2 (int numero);



//início da função principal
int main (){
   
for (int i = 0; i <= 1000; i++){
    if (eh_primo(i)){
        cout << "O numero " << i << " eh primo! \n";
    };
    if (eh_primo2(i)){
        cout << "O numero " << i << " eh primo! (2a funcao)\n";
    };
};
    return 0;
}


bool eh_primo (int numero) {
    if (numero <= 1){
        return false;
    };
    for (int i = 2; i <= (numero/2); i++){
        if (numero % i == 0){
            return false;
        };
    };
    return true;
};

bool eh_primo2 (int numero) {
    if (numero <= 1){
        return false;
    };
    for (int i = 2; (i*i) <= (numero); i++){
        if (numero % i == 0){
            return false;
        };
    };
      return true;
};


