/*  
Lista 5 - Exercício 4
Autor: Pedro Henrique Dias Avelar
Data: 02/05/2024
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

void pergunta (void);

//início da função principal
int main (){
    srand((unsigned) time(NULL));
    char continua = ' ';
    do {
        pergunta();
        cout << "Deseja continuar? (s/n): ";
        cin >> continua;
        if (continua ==  'n'){
            cout << "Ok, tchau!";
            return 0;
        };
    } while (continua == 's');
    cout << "Voce digitou errado! Que pena.";
       return 0;
}


void pergunta (void){
    int a = 1 + (rand() % 10);
    int b = 1 + (rand() % 10);
    int resposta = 0;
    cout << "Quanto eh " << a << " + " << b << " ? \n";
    while (resposta != (a+b)){
    cin >> resposta;
    if (resposta == (a+b)){
        cout << "Certa resposta!\n";
    }else{
        cout << "Errou! Tente denovo!\n";
        };
    };

    cout << "Quanto eh " << a << " * " << b << " ? \n";
    
    while (resposta != (a*b)){
    cin >> resposta;
    if (resposta == (a*b)){
        cout << "Certa resposta!\n";
    }else{
        cout << "Errou! Tente denovo!\n";
        };
    };
};
    



