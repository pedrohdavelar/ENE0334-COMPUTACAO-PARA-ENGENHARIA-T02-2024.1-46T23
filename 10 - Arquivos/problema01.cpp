/*  
Lista 10 - Arquivos
Problema 1
Autor: Pedro Henrique Dias Avelar
Data: 08/07/2024
*/

#include <iostream>
#include <fstream>
#include <vector>


int main (){
    //abre o arquivo vetores.txt
    std::ifstream vetores("vetores.txt");
    std::vector<std::string> linhas; 
    
    if(!vetores){
        std::cout << "Erro na abertura do arquivo vetores.txt" << std::endl;
        return 1;
    } 

    std::string linha;

    while (std::getline(vetores, linha)){
        linhas.push_back(linha);
    }

    vetores.close();

    std::vector<int> numeros;
    int numero;
    int soma = 0;

    std::cout << "O Arquivo vetores.txt possui os seguintes numeros: ";
    for (std::string str : linhas){
        numero = std::stoi(str);
        numeros.push_back(numero);
        std::cout << numero << " ";
        soma += numero;
    }

    std::cout << std::endl << "A soma dos numeros eh: " << soma << std::endl;

    std::ofstream arquivo_saida("soma.txt");
    if (arquivo_saida){
        arquivo_saida << "A soma dos numeros eh: " << soma << std::endl;
        arquivo_saida.close();
        std::cout << "Soma salva no arquivo soma.txt com sucesso!" << std::endl;
    } else {
        std::cout << "Erro ao abrir o arquivo de saida." << std::endl; 
    }
    return 0;
}