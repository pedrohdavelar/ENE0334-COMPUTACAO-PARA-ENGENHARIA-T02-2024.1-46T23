/*  
Exercício #09 - Fundamentos
Autor: Pedro Henrique Dias Avelar
Data: 31/03/2024
*/

#include <iostream>
#include <cmath>

using namespace std;

//início da função principal
int main (){
   
    
    float km,custo_total,custo_medio = 0;    
    cout <<"Por gentileza, informe a distância percorrida em km.\n";
    cout <<"Distância (km) : ";
    cin >> km;

    if (km <=0){
        cout << "Distância Inválida!";
        return 0;
    };

    if (km <= 50){
        custo_total = km*1.75;
    } else if ((km > 50) && (km <= 150)){
        custo_total = (50*1.75)+((km-50)*1.65);
    } else{
        custo_total = (50*1.75)+(100*1.65)+((km-150)*1.5); 
    };

    custo_medio = custo_total/km;
    cout <<"Valor total a pagar : " << custo_total << "\n Custo médio por km : " << custo_medio;
    return 0;
}
