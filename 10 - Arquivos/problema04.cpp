/*  
Lista 10 - Arquivos
Problema 4
Autor: Pedro Henrique Dias Avelar
Data: 08/07/2024
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <filesystem>

//funcao para registrar novo aluno
void registra_aluno (){
    std::string nome;
    std::string matricula;
    std::cout << "Qual o nome do(a) novo(a) aluno(a) : ";
    std::cin >> nome;
    
    //teste para ver se o arquivo ja existe
    std::ifstream teste(nome+".txt");
    if (teste){
        std::cout << "Este(a) aluno(a) jah foi cadastrado(a)! Voltando ao menu..." << std::endl;
        teste.close();
        return;
    }

    //como o arquivo nao existe, fazer a leitura da matricula entao para salvar na primeira linha do arquivo
    std::cout << "Qual a matricula do novo aluno: ";
    std::cin >> matricula;

   std::ofstream arq_aluno(nome+".txt");
   if (!arq_aluno){
    std::cout << "Erro ao salvar o arquivo do(a) aluno(a)! Voltando ao menu..." << std::endl;
    return;
   }
   arq_aluno << matricula << std::endl;
   arq_aluno.close();
   std::cout << "Arquivo " << nome << ".txt salvo! Voltando ao menu...." << std::endl;
}

//funcao para gravar nova nota
void registra_nota (){
    std::string nome_aluno;
    int nota_aluno;

    std::cout <<"Qual o nome do(a) aluno(a)? ";
    std::cin >> nome_aluno;

    if (!std::filesystem::exists(nome_aluno+".txt")){
        std::cout << "Nao foi localizado arquivo para o(a) aluno(a) " << nome_aluno << ".txt! Voltando ao menu..." << std::endl;
        return;
    }

    //tenta abrir o arquivo com o nome do aluno no modo append. se nao conseguir, encerrar a funcao e voltar ao menu
    std::fstream arq_aluno;
    arq_aluno.open(nome_aluno+".txt", std::ios::app);
    if (!arq_aluno){
        std::cout << "Erro ao abrir o arquivo do aluno. Voltando ao menu..." << std::endl;
        return;
    }

    //leitura da nota e gravacao no arquivo
    std::cout << "Qual a nota a ser registrada para o(a) aluno(a) " << nome_aluno << " : ";
    std::cin >> nota_aluno;
    arq_aluno << nota_aluno << std::endl;
    arq_aluno.close();
    std::cout << "Nota salva com sucesso! Voltando ao menu..." << std::endl;
    return; 
}

//funcao para calcular a media das notas de um estudante
void calcula_media (){
        std::string nome_aluno;
        std::string matricula;
        std::vector<int> notas;
        int nota;
        int soma = 0;
        float media;

    //leitura do nome para abertura do arquivo
    std::cout <<"Qual o nome do(a) aluno(a)? ";
    std::cin >> nome_aluno;

    std::fstream arq_aluno(nome_aluno+".txt");
    if (!arq_aluno){
        std::cout << "Nao foi localizado arquivo para o(a) aluno(a) " << nome_aluno << ".txt! Voltando ao menu..." << std::endl;
        return;
    }
    //leitura da primeira linha apenas para nao pegar a matricua no loop
    std::getline(arq_aluno, matricula);
    
    //loop para ler todas as notas e salvar em um vetor
    while (arq_aluno >> nota){
        notas.push_back(nota);
    }

    //se nao houver notas, nao tem porque calcular a media
    if (notas.size() == 0){
        std::cout << "O(a) aluno(a) " << nome_aluno << " nao possui notas cadastradas! Voltando ao menu..." << std::endl;
        return;
    }

    //loop para fazer a soma do vetor com as notas
    for (int i : notas){
        soma += i;
    }

    media = float(soma)/notas.size();
    std::cout << "A media do(a) aluno(a) " << nome_aluno << " eh : " << media << ". Voltando ao menu..." << std::endl;
}

int main () {

    int menu;

    while (true){
        std::cout << std::endl << "Menu:" << std::endl << "1.Cadastrar Aluno" << std::endl << "2.Adicionar nota de um aluno" << std::endl << "3.Calcular media de um aluno" << std::endl << "4.Fechar o programa" << std::endl;
        std::cin >> menu;
        std::cout << std::endl;

        switch (menu){
            case 1:
                registra_aluno();
                break;
            case 2:
                registra_nota();
                break;
            case 3:
                calcula_media();                    
                break;
            case 4:
                std::cout << "Encerrando o programa. Ate mais!";
                return 0;
            default:
                std::cout << "Opcao invalida. Repita por favor." << std::endl;
        }
    }
}