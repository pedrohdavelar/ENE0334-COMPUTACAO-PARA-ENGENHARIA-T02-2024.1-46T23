/*  
Lista 4 - Exercício 2
Autor: Pedro Henrique Dias Avelar
Data: 25/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    int n = 0;
    int p = 0;
    int s = 0;
    int p1 = 0;
    int s1 = 0;
    int p2 = 0;
    int s2 = 0;
    int p3 = 0;
    int s3 = 0;
    int p4 = 0;
    int s4 = 0;

    cout << "Qual a quantidade de linhas (n): ";
    cin >> n; 

// Primeira figura
    for (int i = 1; i <= n; i++) {
        p = i;
        s = n-i;
        while (p > 0){
            cout << "*";
            p--;
        };
        while (s > 0){
            cout << " ";
            s--;
        };
        cout << "\n";

    };
        
// Segunda figura
    for (int i = 1; i <= n; i++) {
        p = n-i+1;
        s = i;
        while (p > 0){
            cout << "*";
            p--;
        };
        while (s > 0){
            cout << " ";
            s--;
        };
        cout << "\n";

    };

// Terceira figura
    for (int i = 1; i <= n; i++) {
        s = i-1;
        p = n-i+1;
        while (s > 0){
            cout << " ";
            s--;
        };
                while (p > 0){
            cout << "*";
            p--;
        };
        cout << "\n";

    };

// Quarta figura
    for (int i = 1; i <= n; i++) {
        s = n-i;
        p = i;
        while (s > 0){
            cout << " ";
            s--;
        };
                while (p > 0){
            cout << "*";
            p--;
        };
        cout << "\n";

    };

// As quatro juntas: 
for (int i = 1; i <= n; i++) {
    p1 = i;
    s1 = n-i;
    p2 = n-i+1;
    s2 = i;
    s3 = i-1;
    p3 = n-i+1;
    s4 = n-i;
    p4 = i;
    while (p1 > 0){
        cout << "*";
        p1--;
    };
    while (s1 > 0){
        cout << " ";
        s1--;
    };

    while (p2 > 0){
        cout << "*";
        p2--;
    };
    while (s2 > 0){
        cout << " ";
        s2--;
    };

    while (s3 > 0){
        cout << " ";
        s3--;
    };
    while (p3 > 0){
        cout << "*";
        p3--;
    };

    while (s4 > 0){
        cout << " ";
        s4--;
    };
    while (p4 > 0){
        cout << "*";
        p4--;
    };
    cout << "\n";
}
        
    return 0;
}
