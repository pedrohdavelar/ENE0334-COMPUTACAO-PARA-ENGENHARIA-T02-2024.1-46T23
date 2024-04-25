/*  
Divisão Completo
Autor: Pedro Henrique Dias Avelar
Data: 10/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    int dividendo = 0;
    int divisor = 0;
    int conta = 0;

cout << "Dividendo: ";
cin >> dividendo;
cout << "Divisor: ";
cin >> divisor;

while (dividendo >= divisor)
{
    dividendo -= divisor;
    conta++;
}
        cout << "Resultado: " << conta <<"\n";
        cout << "Resto: " << dividendo << "\n";
    return 0;
}
