/*  
Exercício #08 - Fundamentos
Autor: Pedro Henrique Dias Avelar
Data: 31/03/2024
*/

#include <iostream>
#include <cmath>

using namespace std;

//início da função principal
int main (){
   
    
    float c1,c2 = 0;    
    cout <<"Por gentileza, informe o valor dos catetos.\n";
    cout <<"Cateto 1 : ";
    cin >> c1;
    cout <<"Cateto 2 : ";
    cin >> c2;
        cout << "A hipotenusa é : " << sqrt((c1*c1)+(c2*c2)) ; 
    return 0;
}
