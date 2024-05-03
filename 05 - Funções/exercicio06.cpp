/*  
Lista 5 - Exercício 6
Autor: Pedro Henrique Dias Avelar
Data: 02/05/2024
*/

#include <iostream>
#include <cmath>

using namespace std;

void hanoi (int n_discos, int e_origem, int e_destino, int e_transicao);


//início da função principal
int main (){
    int discos = 0;
    cout << "Qual a quantidade de discos: ";
    cin >> discos;
    hanoi(discos, 1,3,2);
    return 0;
}

void hanoi (int n_discos, int e_origem, int e_destino, int e_transicao){
    //se for apenas um disco entao ele sera movido para o destino
    if (n_discos == 1){
        cout << e_origem << " -> " << e_destino << "\n";
        return;
    };
    // se for mais de um disco entao ele sera passado para a transicao
    hanoi (n_discos-1, e_origem, e_transicao, e_destino);
    cout << e_origem << " -> " << e_destino << "\n";
    hanoi (n_discos-1, e_transicao, e_destino, e_origem);
};




