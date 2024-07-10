/*  
Lista 10 - Arquivos
Problema 2
Autor: Pedro Henrique Dias Avelar
Data: 08/07/2024
*/

#include <iostream>
#include <fstream>
#include <vector>


int main (){
    
    char caractere = ' ';
    char caractere_alvo = ' ';
    int qtde = 0; 
    
    std::cout << "Qual caractere deseja buscar no arquivo mochileiro.txt?" << std::endl;
    std::cin >> caractere_alvo;


    //abre o arquivo mochileiro.txt
    std::ifstream mochileiro("mochileiro.txt");
    std::vector<std::string> linhas; 
    
    if(!mochileiro){
        std::cout << "Erro na abertura do arquivo mochileiro.txt" << std::endl;
        return 1;
    } 

    while (mochileiro.get(caractere)){
        if (caractere == caractere_alvo){
            qtde++;
        }
    }

    mochileiro.close();

    if (qtde == 0){
        std::cout << "O caractere '" << caractere_alvo << "' nao aparece no arquivo mochileiro.txt." << std::endl;    
    } else {
        std::cout << "O caractere '" << caractere_alvo << "' aparece " << qtde; 
        if (qtde > 1){  
            std::cout<< " vezes no arquivo mochileiro.txt." << std::endl; 
            } else {
                std::cout<< " vez no arquivo mochileiro.txt." << std::endl;    
            }
    }
    return 0;
}