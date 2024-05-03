/*  
Lista 3 - Exercício 1
Autor: Pedro Henrique Dias Avelar
Data: 25/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    char continua = 's';
    float km = 0;
    float km_total = 0;
    float combustivel = 0;
    float combustivel_total = 0;
    float consumo = 0;
    float consumo_total =0;
    
    while (continua == 's'){
        cout << "Deseja adicionar nova medida? (s) : ";
        cin >> continua;
        if (continua != 's'){
            break;
            };

        cout << "Quantos KM foram percorridos: ";
        cin >> km;
        cout << "Quantos litros foram abastecidos: ";
        cin >> combustivel;
        km_total += km;
        combustivel_total += combustivel;
        consumo = km/combustivel;
        consumo_total = km_total/combustivel_total;
        cout << "Consumo medio deste registro: " << consumo << "Km/L" << "\n";
        cout << "Consumo medio total até o momento: " << consumo_total << "Km/L" << "\n";
    };
    return 0;
}
