/*  
Trabalho de Computação para Engenharia
Projeto Escolhido - Bingo
Autores: Pedro Henrique Dias Avelar
Data: 22/06/2024
*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

const int MENOR_PEDRA = 1;
const int MAIOR_PEDRA = 60;
const int NUM_PEDRAS = MAIOR_PEDRA - MENOR_PEDRA + 1;

struct jogador_bingo {
    int cartela[5][5];
    std::string nome_jogador;
    bool ganhou;
};


void preenche_cartela (jogador_bingo& jogador);
bool checa_numero_cartela_repetido (jogador_bingo& jogador,  int numero);
bool checa_numero_sorteado_repetido (int n_sorteados[], int n_pedras,  int numero);
void avalia_linha (jogador_bingo& jogador, int linha, int n_pedras, int n_sorteados[]);
void avalia_coluna (jogador_bingo& jogador, int coluna, int n_pedras, int n_sorteados[]);
void sorteia_pedra (int n_pedras, int n_sorteados[]);
void imprime_cartela (jogador_bingo &jogador, int n_sorteados[], int n_pedras);
void imprime_numeros_sorteados (int n_sorteados[], int n_pedras);

int numeros_sorteados[NUM_PEDRAS];
int numero_sorteado;
bool numero_sorteado_valido = false;

//início da função principal
int main (){

    //geração de semente para o gerador de numeros aleatorios
    srand((unsigned) time(NULL));

    //variaveis para armazenar as pedras sorteadas


    //jogadores e cartelas
    jogador_bingo a;
    jogador_bingo b;
    jogador_bingo c;
    jogador_bingo d;

    std::cout <<"Bem Vindo(a) ao Bingo da Computação para Engenharia!" << std::endl;
    std::cout <<"Para começar, precisamos que cada jogador informe seus dados e preencha sua cartela." << std::endl;
    
    std::cout << "Preencha os dados do primeiro jogador" << std::endl;
    preenche_cartela(a);
    std::cout << "Preencha os dados do segundo jogador" << std::endl;
    preenche_cartela(b);
    std::cout << "Preencha os dados do terceiro jogador" << std::endl;
    preenche_cartela(c);
    std::cout << "Preencha os dados do quarto jogador" << std::endl;
    preenche_cartela(d);
    imprime_cartela(a, numeros_sorteados, 1);
    imprime_cartela(b, numeros_sorteados, 1);
    imprime_cartela(c, numeros_sorteados, 1);
    imprime_cartela(d, numeros_sorteados, 1);

    //Para cada pedra sorteada, serão feitas iterações para avaliar se houve vencedor
    for (int i = 0; i < NUM_PEDRAS; i++){
        std::cout << "Comecando o sorteio da " << i+1 << "a pedra!" << std::endl; 
        numero_sorteado_valido = false;
        
        //loop para garantir que o numero sorteado não seja repetido
        while (numero_sorteado_valido == false){
            numero_sorteado = MENOR_PEDRA + (std::rand() % NUM_PEDRAS);
            if (checa_numero_sorteado_repetido(numeros_sorteados, i, numero_sorteado) == false) {
                std::cout << "O " << i+1 << "o numero sorteado eh: " << numero_sorteado << "!!!" << std::endl;
                numero_sorteado_valido = true; 
                numeros_sorteados[i] = numero_sorteado;
                std::cout << "Numeros sorteados ate o momento:" << std::endl;
                imprime_numeros_sorteados(numeros_sorteados, i+1);
            };
        };
    
        //Cinco iterações para avaliar as 5 linhas / 5 colunas das cartelas dos 4 jogadores;  
        for (int j = 0; j < 5; j ++){
            avalia_linha(a,j,i,numeros_sorteados);
            avalia_coluna(a,j,i,numeros_sorteados);
            avalia_linha(b,j,i,numeros_sorteados);
            avalia_coluna(b,j,i,numeros_sorteados);
            avalia_linha(c,j,i,numeros_sorteados);
            avalia_coluna(c,j,i,numeros_sorteados);
            avalia_linha(d,j,i,numeros_sorteados);
            avalia_coluna(d,j,i,numeros_sorteados);
        };

        
        if (a.ganhou == true || b.ganhou == true || c.ganhou == true || d.ganhou == true){
            if (a.ganhou == true){
                std::cout << "BINGO PARA O JOGADOR(A)" << a.nome_jogador << "!!!" << std::endl;
                imprime_cartela(a, numeros_sorteados, i);
            };
            if (b.ganhou == true){
                std::cout << "BINGO PARA O JOGADOR(A)" << b.nome_jogador << "!!!" << std::endl;
                imprime_cartela(b, numeros_sorteados, i);
            };
            if (c.ganhou == true){
                std::cout << "BINGO PARA O JOGADOR(A)" << c.nome_jogador << "!!!" << std::endl;
                imprime_cartela(c, numeros_sorteados, i);
            };
            if (d.ganhou == true){
                std::cout << "BINGO PARA O JOGADOR(A)" << d.nome_jogador << "!!!" << std::endl;
                imprime_cartela(d, numeros_sorteados, i);
            };
            return 0;
        }; 
    };
  
    return 0;
}

//checa se um determinado numero existe na cartela; se sim retorna true, se não retorna false
bool checa_numero_cartela_repetido (jogador_bingo& jogador, int numero){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (jogador.cartela[i][j] == numero){
                return true;
            };
        };
    };
    return false;
}

//funcao para preencher o nome do jogador e os numeros da cartela
void preenche_cartela (jogador_bingo& jogador){
    bool numero_valido = false;
    int numero_digitado = 0;
    
    //inicializacao da cartela
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            jogador.cartela[i][j] = 0;
        };
    };
    
    //nome do jogador
    std::cout << "Digite o seu nome:" << std::endl;
    std::cin >> jogador.nome_jogador;
    
    //preenchimento da cartela
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            numero_valido = false;
            while (numero_valido == false){
                std::cout << "Digite o numero da posição [" << i << "] [" << j << "]: ";
                std::cin >> numero_digitado;
                if (checa_numero_cartela_repetido (jogador, numero_digitado) == true){
                    std::cout << "Numero repetido! Digite outro por favor." << std::endl;
                    std::cout << "Sua cartela até o momento:" << std::endl;
                    imprime_cartela(jogador, numeros_sorteados, 1);
                } else if (numero_digitado > MAIOR_PEDRA || numero_digitado < MENOR_PEDRA) {
                    std::cout << "Numero fora do aceitado! Precisa estar entre " << MENOR_PEDRA << " e " << MAIOR_PEDRA << ". Digite outro por favor." << std::endl;
                } else {
                    jogador.cartela[i][j] = numero_digitado;
                    numero_valido = true;
                };
            }
        }
    }
}

void imprime_cartela (jogador_bingo& jogador, int n_sorteados[], int n_pedras){
    //std::cout << "Jogador: " << jogador.nome_jogador << std::endl;
    //std::cout << "Cartela:" << std::endl;
    //std::cout << "|" << jogador.cartela[0][0] << "|" <<  jogador.cartela[0][1] << "|" << jogador.cartela[0][2] << "|" << jogador.cartela[0][3] << "|" << jogador.cartela[0][4] << "|" << std::endl;
    //std::cout << "|" << jogador.cartela[1][0] << "|" <<  jogador.cartela[1][1] << "|" << jogador.cartela[1][2] << "|" << jogador.cartela[1][3] << "|" << jogador.cartela[1][4] << "|" << std::endl;
    //std::cout << "|" << jogador.cartela[2][0] << "|" <<  jogador.cartela[2][1] << "|" << jogador.cartela[2][2] << "|" << jogador.cartela[2][3] << "|" << jogador.cartela[2][4] << "|" << std::endl;
    //std::cout << "|" << jogador.cartela[3][0] << "|" <<  jogador.cartela[3][1] << "|" << jogador.cartela[3][2] << "|" << jogador.cartela[3][3] << "|" << jogador.cartela[3][4] << "|" << std::endl;
    //std::cout << "|" << jogador.cartela[4][0] << "|" <<  jogador.cartela[4][1] << "|" << jogador.cartela[4][2] << "|" << jogador.cartela[4][3] << "|" << jogador.cartela[4][4] << "|" << std::endl;

    for (int i = 0; i < 5; i++){
        std::cout << "|";
        for (int j = 0; j < 5; j++){
            if (checa_numero_sorteado_repetido(n_sorteados, n_pedras, jogador.cartela[i][j])==true){
            std::cout << "*";
            };
            std::cout << jogador.cartela[i][j] << "|";
        };
        std::cout << std::endl;
    };
}

//checa se o numero ja foi sorteado; se sim retorna true, se nao retorna false
bool checa_numero_sorteado_repetido (int n_sorteados[], int n_pedras, int numero){
    for (int i = 0; i < n_pedras; i++){
        if (n_sorteados[i] == numero){
            return true;
        };
    };
    return false;
}

//verifica se uma determinada linha possui 5 acertos
void avalia_linha (jogador_bingo& jogador, int linha, int n_pedras, int n_sorteados[]){
    int acertos = 0;
    for (int i = 0; i < 5; i++){
        if (checa_numero_sorteado_repetido(n_sorteados, n_pedras, jogador.cartela[linha][i]) == true){
            acertos++;
        }; 
    };
    if (acertos == 5) {
        jogador.ganhou = true;
    };
}

//verifica se uma determinada coluna possui 5 acertos
void avalia_coluna (jogador_bingo& jogador, int coluna, int n_pedras, int n_sorteados[]){
    int acertos = 0;
    for (int i = 0; i < 5; i++){
        if (checa_numero_sorteado_repetido(n_sorteados, n_pedras, jogador.cartela[i][coluna]) == true){
            acertos++;
        }; 
    };
    if (acertos == 5) {
        jogador.ganhou = true;
    };
}

void imprime_numeros_sorteados (int n_sorteados[], int n_pedras){
    for (int i = 0; i < n_pedras; i++){
        std::cout << n_sorteados[i] << " ";
    };
    std::cout << std::endl;
}