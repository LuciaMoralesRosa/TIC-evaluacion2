#include<iostream>
int main (){
    //Definicion de variables
    char salir;
    char respuesta;
    std::cout <<"Hola mundo, mi primer programa\n";
    std::cout <<"Eres guapo? (s/n): ";
    std::cin >> respuesta;
    if(respuesta == 's' || respuesta =='S' ){
                 std::cout <<"Hola guapo";
    }
    else {
         std::cout <<"Hola feo";
         }
    std::cin >> salir;
}
