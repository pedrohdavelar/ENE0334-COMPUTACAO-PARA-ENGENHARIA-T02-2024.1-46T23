/*  
Lista 4 - Exercício 6
Autor: Pedro Henrique Dias Avelar
Data: 25/04/2024
*/

#include <iostream>
#include <cmath>

using namespace std;

//início da função principal
int main (){
   
    int lim_inf = 1;
    int lim_sup = 100;
    char resposta;

    for (int i =1; i < 8; i++){
        cout << "Tentativa #" << i << "\n";
        cout << "O numero eh maior (+) ou menor (-), ou igual (=) a " << ((lim_sup+lim_inf)/2) << "?\n";
        cin >> resposta;
        switch (resposta){
            case '+':
            lim_inf = ((lim_sup+lim_inf)/2)+1;
            break;
            case '-':
            lim_sup = ((lim_sup+lim_inf)/2)-1;
            break;
            case '=':
            cout << "O numero entao eh " << ((lim_sup+lim_inf)/2) << ", e eu acertei na " << i << "a tentativa!";
            return 0;
            break;
            default:
            cout << "operador invalido... tente denovo";
            return 0;
        };
    };
    cout << "\nNao consegui adivinhar... ;_;";
    return 0;
}
