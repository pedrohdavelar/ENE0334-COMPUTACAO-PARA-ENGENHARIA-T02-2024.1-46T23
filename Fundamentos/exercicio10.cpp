/*  
Exercício #09 - Fundamentos
Autor: Pedro Henrique Dias Avelar
Data: 31/03/2024
*/

#include <iostream>
#include <cmath>

using namespace std;

//início da função principal
int main (){
   
    string five_chars,crip_five_chars;
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    int vogais = 0;
    cout << "Por gentileza, digite uma string de 5 caracteres : ";
    cin >> five_chars;
    crip_five_chars = five_chars;

    if (size(five_chars)!=5){
        cout << "A string não tem 5 caracteres...";
        return 0;
    };

    //cout << "a: " << a << " e: " << e << " i: " << i << " o: " << o << " u: " << u << " vogais: " << vogais << "\n";
    for (int x=0; x < size(five_chars); x++){ //varredura da string
        if (five_chars[x]=='a' || five_chars[x]=='A'){
            a++;
            vogais++;
            crip_five_chars[x]='i'; 
        }else if (five_chars[x]=='e' || five_chars[x]=='E'){
            e++;
            vogais++;
            crip_five_chars[x]='o'; 
        }else if (five_chars[x]=='i' || five_chars[x]=='I'){
            i++;
            vogais++;
            crip_five_chars[x]='u'; 
        }else if (five_chars[x]=='o' || five_chars[x]=='O'){
            o++;
            vogais++; 
        }else if (five_chars[x]=='u' || five_chars[x]=='U'){
            u++;
            vogais++; 
        };
        //cout << "a: " << a << " e: " << e << " i: " << i << " o: " << o << " u: " << u << " vogais: " << vogais << "\n";
    };

    cout << "String Original : " << five_chars << "\n";
    cout << "Quantidade de vogais : " << vogais << "\n";
    cout << "Quantidade de vogais a : " << a << "\n";
    cout << "Quantidade de vogais e : " << e << "\n";
    cout << "Quantidade de vogais i : " << i << "\n";
    cout << "Quantidade de vogais o : " << o << "\n";
    cout << "Quantidade de vogais u : " << u << "\n";
    cout << "String Criptografada : " << crip_five_chars << "\n";

    return 0;
}
