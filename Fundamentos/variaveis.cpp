/*  
Meu 1o programa em C++
Autor: Pedro Henrique Dias Avelar
Data: 27/03/2024
*/

#include <iostream>
#include <iomanip> //depois ver o que faz!
using namespace std;

//início da função principal
int main (){
    string nome;
    nome = "Pedro";           // = nesse caso é um operador de atribuição

    int x = 7; //a declaração e inicialização de uma variável podem ocorrer simultaneamente.
    int z,y,t; //declaração simultanea de variáveis
    float pi = 3.14159;
    double pii = 3.14159265358979;
    double n = 3.295e-9; //notação cientfífica
    bool b = 0; //true (1) or false (0)
    char c = 'A'; //apenas um caractere
    float massa, acel, forca;
    cout << "Hello World.\n" << nome <<"\n"; //imprime o texto na tela
    cout << "Lixo na memória:" << z << y << t << "\n";

    cout << "float " << pi << " double " << pii << " not. cientifica " << n << "\n";

    cout << "Confirme seu nome: ";
    cin >> nome;
    cout << "Obrigado por confirmar, " << nome;

    cout << "Calculo da força. Digite a massa: ";
    cin >> massa;
    cout << "Digite a aceleração :";
    cin >> acel;
    forca = massa * acel;
    cout <<"A força é " << forca << "\n";
    return 0; // return code 0 significa que ocorreu tudo bem - Caminho feliz =)
}
