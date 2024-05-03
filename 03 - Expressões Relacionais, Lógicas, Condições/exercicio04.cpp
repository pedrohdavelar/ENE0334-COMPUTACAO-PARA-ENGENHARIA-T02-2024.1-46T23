/*  
Lista 3 - Exercício 4
Autor: Pedro Henrique Dias Avelar
Data: 25/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    int byte = 0;
    int bit1 = 0;
    int bit2 = 0;
    int bit3 = 0;
    int bit4 = 0;
    int bit5 = 0;
    int bit6 = 0;
    int bit7 = 0;
    int bit8 = 0;
    int numero = 0;
    cout << "Digite um byte (ate 8 digitos): ";
    cin >> byte;

    if ((byte < 0) || (byte > 11111111))
    {
        cout << "Entrada Invalida.";
        return 0;
    };

    bit8 = byte % 10;
    byte /= 10;
    bit7 = byte % 10;
    byte /= 10;
    bit6 = byte % 10;
    byte /= 10;
    bit5 = byte % 10;
    byte /= 10;
    bit4 = byte %10;
    byte /= 10;
    bit3 = byte %10;
    byte /=10;
    bit2 = byte %10;
    byte /=10;
    bit1 = byte;
    
    cout << bit1 << " " << bit2 << " " << bit3 << " " << bit4 << " " << bit5 << " " << bit6 << " " << bit7 << " " << bit8 << "\n";
    if ( ((bit1 != 0) && (bit1 != 1)) || ((bit2 != 0) && (bit2 != 1)) || ((bit3 != 0) && (bit3 != 1)) || ((bit4 != 0) && (bit4 != 1)) || ((bit5 != 0) && (bit5 != 1)) || ((bit6 != 0) && (bit6 != 1)) || ((bit7 != 0) && (bit7 != 1)) || ((bit8 != 0) && (bit8 != 1))){
        cout << "Um dos bits eh invalido.";
        return 0;
    };
    
// 128 64 32 16 8 4 2 1

    numero = ((128*bit1)+(64*bit2)+(32*bit3)+(16*bit4)+(8*bit5)+(4*bit6)+(2*bit7)+(bit8));
    cout << "O numero binario " << bit1 << bit2 << bit3<< bit4<< bit5 << bit6 << bit7<< bit8 << " representa o numero decimal " << numero;
     return 0;
}
