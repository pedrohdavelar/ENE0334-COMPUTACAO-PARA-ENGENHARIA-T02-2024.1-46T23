/*  
Prova #2 de Computação para Engenharia
Questão 02
Autor: Pedro Henrique Dias Avelar
Matrícula: 241037112
Data: 05/07/2024
*/

#include <iostream>
#include <vector>
#include <string>

//struct da lista encadeada
struct lista{
    std::string valor;
    lista *proximo;
};

//inicializando o primeiro elemento da lista
lista *cabeca = NULL;  

//funcao para inserir elemento a lista
void inserir(lista* cabeca, std::string texto);

//funcao para buscar um elemento da lista. retorna true se o elemento for localizado
bool busca(lista* cabeca, std::string k);

//imprime todos os elementos da lista
void imprime();


//início da função principal
int main (){

//declaracao de variaveis locais
int N = 0;      //quantidade de elementos da lista
std::string entrada;

std::cout << "Qual o valor para N: ";
std::cin >> N;

for (int i = 0; i < (N-1); i++){
    std::cout << "Elemento: ";
    std::cin >> entrada;
    inserir(cabeca, entrada);
    std::cout << entrada << std::endl;
};

imprime();
return 0;
}


//funcao para inserir elemento a lista
void inserir(lista* cabeca, std::string texto){
    struct lista *novo_elemento = new lista;
    novo_elemento->valor = texto;
    novo_elemento->proximo = cabeca;
    cabeca = novo_elemento;
};

//imprime todos os elementos da lista
void imprime(){
    std::cout << "esses sao os elementos da lista:" << std::endl;
    lista* temp = cabeca;
    while (temp != NULL){
        std::cout << temp->valor << " ";
        temp = temp->proximo;
    };
    std::cout << std::endl;
}