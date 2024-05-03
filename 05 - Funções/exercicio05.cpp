/*  
Lista 5 - Exercício 5
Autor: Pedro Henrique Dias Avelar
Data: 02/05/2024
*/

#include <iostream>
#include <cmath>

using namespace std;

int avalia_palpite (int n, int p);
int novo_palpite (void);

//início da função principal
int main (){
    srand((unsigned) time(NULL));
    int numero = 1 + (rand() % 1000);
    int palpite = 0;
    int status = 0;
    char resposta = ' ';
    int lim_inf = 1;
    int lim_sup = 1000;

    //cout << "Numero: " << numero << "\n";
    cout << "Eu tenho um numero entre " << lim_inf << " e " << lim_sup << ".\nVoce consegue adivinhar o meu numero?\nDigite seu primeiro palpite.\n";
    cin >> palpite;
   
    while (true){
        //cout << "Numero: " << numero << "\n";
        status = avalia_palpite(numero, palpite);
        if (status == 1){
            while (resposta != 's'){
                cin >> resposta;
                if (resposta == 'n'){
                    cout << "\nOk! Tchau!";
                    return 0;
                } else if (resposta == 's'){
                    cout << "Ok! Recomecando...\n";
                    numero = lim_inf + (rand() % lim_sup);
                    //cout << "Numero: " << numero << "\n";
                    resposta = ' ';
                    break;
                } else {
                    cout << "\nOpcao invalida! Repita por favor.\n";
                };
            };
        };
        palpite = novo_palpite();
    };
    return 0;
}


int avalia_palpite (int n, int p){
    //cout << "n: " << n << " p: " << p << "\n";
    if (n==p){
        cout << "Excelente! Voce adivinhou o numero! Voce gostaria de jogar novamente? (s ou n)\n";
        return 1;
    } else if (n > p){
        cout << "Muito baixo. Tente novamente\n";
        return 2;
    } else {
        cout << "Muito alto. Tente novamente\n";
        return 3;
    }
};

int novo_palpite (void){
    int p;
    cout << "Qual o novo palpite? ";
    cin >> p;
    return p;
};


