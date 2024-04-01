/*  
Exercício #03 - Fundamentos
Autor: Pedro Henrique Dias Avelar
Data: 31/03/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    const float pi = 3.14159; //Declaração e inicialização de PI como uma constante
    float raio = 0;    
    cout <<"Por gentileza, informe o raio da circunferência\n";
    cout <<"Raio : ";
    cin >> raio;
        cout << "O diâmetro é: " << raio*2 << "\nA área é: " << pi*raio*raio << "\nO comprimento é : " << 2*pi*raio; 
    return 0;
}
