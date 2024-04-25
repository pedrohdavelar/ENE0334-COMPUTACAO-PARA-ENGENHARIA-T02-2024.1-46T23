/*  
Primeiros N impares
Autor: Pedro Henrique Dias Avelar
Data: 10/04/2024
*/

#include <iostream>

using namespace std;

//início da função principal
int main (){
   
    int n = 0;
    int impar = 1;
   
cout << "n: ";
cin >> n;

for (int i = 0; i < n; i++, impar +=2)
{
    cout << impar << " ";
};

return 0;
}
