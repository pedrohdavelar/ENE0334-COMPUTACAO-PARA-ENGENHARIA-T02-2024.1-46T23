/*  
Lista 10 - Arquivos
Problema 3
Autor: Pedro Henrique Dias Avelar
Data: 08/07/2024
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct paciente {
    std::string codigo;
    int altura; // em cm
    int peso; // em kg
};

int main() {
    std::ifstream arq_peso("peso.txt");
    std::ifstream arq_altura("altura.txt");

    if (!arq_peso) {
        std::cout << "Erro ao abrir o arquivo 'peso.txt'." << std::endl;
        return 1;
    }

    if (!arq_altura) {
        std::cout << "Erro ao abrir o arquivo 'altura.txt'." << std::endl;
        return 1;
    }
    

    std::vector<paciente> lista_pacientes;      //lista dos pacientes
    paciente gda_paciente;                      //struct paciente para armazenar os valores que serao salvos no vetor
    std::string linha1, linha2;                 //par de linhas para a leitura dos arquivos
    int i = 0;                                  //variavel para controlar o indice do vetor

    while (std::getline(arq_peso, linha1) && std::getline(arq_peso, linha2)){    //como o primeiro loop ira iniciar o vetor, nao eh necessario se preocupar com o indice
        gda_paciente.codigo = linha1;           //primeira linha do par eh o codigo do paciente
        gda_paciente.peso = std::stoi(linha2);  //segunda linha do par eh o peso do paciente
        lista_pacientes.push_back(gda_paciente);  //armazena os dados na lista
    }

    while (std::getline(arq_altura, linha1) && std::getline(arq_altura, linha2)){
        gda_paciente.codigo = linha1;           
        gda_paciente.altura = std::stoi(linha2);
        if (gda_paciente.codigo == lista_pacientes[i].codigo){
            lista_pacientes[i].altura = gda_paciente.altura;
        } else {
            std::cout << "Os arquivos peso.txt e altura.txt não batem! Erro na execucao do programa. Abortando...";
            return 1;
        }
        i++;
    }

    arq_peso.close();
    arq_altura.close();

    int max_peso = 0;
    int max_altura = 0;
    std::string cd_max_peso, cd_max_altura;

    for (const auto& p : lista_pacientes){
        if (p.peso > max_peso){
            max_peso = p.peso;
            cd_max_peso = p.codigo;
        }
        if (p.altura > max_altura){
            max_altura = p.altura;
            cd_max_altura = p.codigo;
        } 

    }

    std::cout << "O paciente " << cd_max_peso << " eh o mais pesado, pesando " << max_peso << "kg." << std::endl; 
    std::cout << "O paciente " << cd_max_altura << " eh o mais alto, medindo " << max_altura << "cm." << std::endl; 

    return 0;
}