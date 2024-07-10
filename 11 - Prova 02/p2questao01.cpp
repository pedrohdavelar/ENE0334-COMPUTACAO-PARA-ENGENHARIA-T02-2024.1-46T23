/*  
Prova #2 de Computação para Engenharia
Questão 01
Autor: Pedro Henrique Dias Avelar
Matrícula: 241037112
Data: 05/07/2024
*/

#include <iostream>
#include <vector>


//início da função principal
int main (){

//declaracao de variaveis locais

bool numero_eh_positivo = false;        //flag para garantir que a entrada se trata de um numero positivo
bool numero_foi_trocado = false;        //flag para informar se houve troca ou nao de elementos do vetor
int numero = 0;                         //numero recebido pelo console

std::vector<int> lista_numeros;

//entrada - 10 números positivos
for (int i = 0; i < 10; i++){
    numero_eh_positivo = false;                                                 //setando a flag para cada iteração do for garantir que o numero inserido seja positivo;
    while (numero_eh_positivo == false){
        std::cout << "Digite o " << i+1 << "o numero da lista:" << std::endl;
        std::cin >> numero;
        if (numero < 0) {                                                         //se o numero for negativo, mostre a mensagem de erro
            std::cout << "Digite um numero positivo, por favor." << std::endl;
        } else {                                                                //se nao, setando a flag para sair do loop - a entrada foi validada
            numero_eh_positivo = true;
        };        
    };
    lista_numeros.push_back(numero);
};

//saida - impressao no console dos elementos do vetor com a ordenacao original
std::cout << "Lista original: ";
for (int i = 0; i < lista_numeros.size(); i++){
   std::cout << lista_numeros.at(i) << " ";
};
std::cout << std::endl;

//algoritmo do bubble sort
do {
    numero_foi_trocado = false;                      //reset da flag
    for (int i = 0; i < (lista_numeros.size() - 1); i++){       //varrida dos elementos da lista(n) ate o elemento n-1 para fazer a troca
        if (lista_numeros.at(i) > lista_numeros.at(i+1)){
            std::swap(lista_numeros[i],lista_numeros[i+1]);
            numero_foi_trocado = true;                          //se houve numero trocado, sera feita entao nova iteracao
        };
    };

}
while (numero_foi_trocado == true);                             //quando nao houver mais numeros trocados significa que os elementos da lista estao ordenados


//saida - impressao no console dos elementos do vetor ordenados
std::cout << "Lista ordenada: ";
for (int i = 0; i < lista_numeros.size(); i++){
   std::cout << lista_numeros.at(i) << " ";
};
std::cout << std::endl;
return 0;
}
