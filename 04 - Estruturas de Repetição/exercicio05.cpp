/*  
Lista 4 - Exercício 5
Autor: Pedro Henrique Dias Avelar
Data: 25/04/2024
*/

#include <iostream>
#include <cmath>

using namespace std;

//início da função principal
int main (){
   
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    int n5 = 0;
    
    cout << "N1 :";
    cin >> n1;
    cout << "N2 :";
    cin >> n2;
    cout << "N3 :";
    cin >> n3;
    cout << "N4 :";
    cin >> n4;
    cout << "N5 :";
    cin >> n5;

    if ((n1 >30) || (n1 < 1)){
        cout << "O 1o numero precisa estar entre 1 e 30...";
        return 0;
    };
    if ((n2 >30) || (n2 < 1)){
        cout << "O 2o numero precisa estar entre 1 e 30...";
        return 0;
    };
    if ((n3 >30) || (n3 < 1)){
        cout << "O 3o numero precisa estar entre 1 e 30...";
        return 0;
    };
    if ((n4 >30) || (n4 < 1)){
        cout << "O 4o numero precisa estar entre 1 e 30...";
        return 0;
    };
    if ((n5 >30) || (n5 < 1)){
        cout << "O 5o numero precisa estar entre 1 e 30...";
        return 0;
    };

    cout << "\n#N1:";
    for (int i = n1; i >0; i--){
        cout << "*";
    };
    cout << "\n#N2:";
    for (int i = n2; i >0; i--){
        cout << "*";
    };
    cout << "\n#N3:";
    for (int i = n3; i >0; i--){
        cout << "*";
    };
    cout << "\n#N4:";
    for (int i = n4; i >0; i--){
        cout << "*";
    };
    cout << "\n#N5:";
    for (int i = n5; i >0; i--){
        cout << "*";
    };
    return 0;
}
