/*  
Lista 4 - Exercício 1c
Autor: Pedro Henrique Dias Avelar
Data: 12/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    double x = 0;
    double x2 = 0;
    double x_exp = 0;
    double numero = 0;
    double fatorial = 0;
    double gd_numero = 0;
    double resultado = 1;

    cout << "Qual o valor de X: ";
    cin >> x; 

    for (int i = 1; i <= 10; i++) //para ter uma maior precisão, aumentar o # de iterações
    {
        numero = i;
        fatorial = i;
        x_exp = i;
        x2 = x;
        while (fatorial > 1) {
            fatorial --;
            numero *= fatorial;
        };

        while (x_exp > 1){
            x_exp --;
            x2 *=x;
        };

        //cout << "Iteração #" << i << "\n";
        //cout << "numerador :" << x2 << "\n";
        //cout << "denominador : " << numero << "\n"; 

        resultado += (x2/numero);
    };
    
    cout << "e^" << x << "é igual a " << resultado << ".";

    return 0;
}
