/*  
Lista 7 - Exercício 1
Autor: Pedro Henrique Dias Avelar
Data: 14/06/2024
*/

#include <iostream>
#include <cmath>
#include <string>




int search_asterisk ();

//início da função principal
int main (){
   
    std::string input_text;
    int a1 = 0;
    int a2 = 0;
    int u1 = 0;
    int u2 = 0;
    
    bool last_underline = false;
    bool last_asterisk = false;
    while(getline(std::cin,input_text)){
        int a1 = 0;
        int a2 = 0;
        int u1 = 0;
        int u2 = 0;
        bool last_underline = false;
        bool last_asterisk = false;
    

        while ((last_asterisk == false) && (last_underline == false)){
            last_asterisk = false;
            last_underline = false;
            //* replacement
            while (last_asterisk == false){
                //find first asterisk
                a1 = input_text.find("*",a1);
                //std::cout << "a1: " << a1 << std::endl;
                if (a1 == std::string::npos) {
                    last_asterisk = true;
                    //std::cout << "last asterisk: " << last_asterisk << std::endl;
                    break;
                };
                //find second asterisk
                a2 = input_text.find("*",(a1+1));
                //std::cout << "a2: " << a2 << std::endl;
                if (a2 == std::string::npos) {
                    last_asterisk = true; 
                    //std::cout << "last asterisk: " << last_asterisk << std::endl;
                    break;
                };
                //std::cout << input_text << std::endl; 
                input_text.replace(a1,1,"<b>");
                //std::cout << input_text << std::endl; 
                input_text.replace((a2+2),1,"</b>");
                //std::cout << input_text << std::endl;
                //std::cout << "last asterisk: " << last_asterisk << std::endl;
                a1 = a2+1;
                //std::cout << "a1 final: " << a1 << std::endl;
                //std::cout << "a2 final: " << a2 << std::endl;
            };
    
            //_ replacement
            while (last_underline == false){
                //find first underline
                u1 = input_text.find("_",u1);
                //std::cout << "u1: " << u1 << std::endl;
                if (u1 == std::string::npos) {
                    last_underline = true;
                    //std::cout << "last underline: " << last_underline << std::endl;
                    break;
                };
                //find second underline
                u2 = input_text.find("_",(u1+1));
                //std::cout << "u2: " << u2 << std::endl;
                if (u2 == std::string::npos) {
                    last_underline = true; 
                    //std::cout << "last underline: " << last_underline << std::endl;
                    break;
                };
                //std::cout << input_text << std::endl; 
                input_text.replace(u1,1,"<i>");
                //std::cout << input_text << std::endl; 
                input_text.replace((u2+2),1,"</i>");
                //std::cout << input_text << std::endl;
                //std::cout << "last asterisk: " << last_asterisk << std::endl;
                //std::cout << "last underline: " << last_asterisk << std::endl;
                u1 = u2+1;
                //std::cout << "u1 final: " << u1 << std::endl;
                //std::cout << "u2 final: " << u2 << std::endl;
            };
        };
        std::cout << input_text << std::endl;     
};
    return 0;
}

