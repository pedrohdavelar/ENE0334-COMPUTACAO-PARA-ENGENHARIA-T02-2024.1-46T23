/*  
Lista 4 - Exercício 4
Autor: Pedro Henrique Dias Avelar
Data: 25/04/2024
*/

#include <iostream>
#include <cmath>

using namespace std;

//início da função principal
int main (){
   
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    int n5 = 0;
    float total = 0;
    char input;
    int input1 = 0;
    int input2 = 0;

    while (1){
        cout << "Deseja adicionar novo registro de venda? (s): ";
        cin >> input;
        if (input != 's'){
            cout << "Ok! Lista finalizada.\n";
            break;
        };
        while(1){
            cout << "Digite o codigo do produto : ";
            cin >> input1;
            if ((input1 > 0) && (input1 <=5)){
                break;
            } else {
                cout << "Codigo invalido! Repita por favor.\n"; 
            };
        };
        while(1){
            cout << "Digite a quantidade do produto " << input1 << " :";
            cin >> input2;
            if (input2 > 0){
                break;
            } else { 
                cout << "Quantidade invalida! Repita por favor. \n";
            };            
        };
        switch (input1){
            case 1:
            n1 += input2;
            break;
            case 2:
            n2 += input2;
            break;
            case 3:
            n3 += input2;
            break;
            case 4:
            n4 += input2;
            break;
            case 5:
            n5 += input2;
            break;
            default:
            cout << "Algo de errado aconteceu com o codigo do produto... \n"; 
        };
    };
    total = ((n1*2.98)+(n2*4.50)+(n3*9.98)+(n4*4.49)+(n5*6.87));
    cout << "Foram vendidas " << n1 << " unidades do produto 1 a R$2.98, totalizando R$" << n1*2.98 << "\n";
    cout << "Foram vendidas " << n2 << " unidades do produto 2 a R$4.50, totalizando R$" << n2*4.50 << "\n";
    cout << "Foram vendidas " << n3 << " unidades do produto 3 a R$9.98, totalizando R$" << n3*9.98 << "\n";
    cout << "Foram vendidas " << n4 << " unidades do produto 4 a R$4.49, totalizando R$" << n1*4.49 << "\n";
    cout << "Foram vendidas " << n5 << " unidades do produto 5 a R$6.87, totalizando R$" << n1*6.87 << "\n";
    cout << "O total vendido foi R$" << total;
    return 0;
}
