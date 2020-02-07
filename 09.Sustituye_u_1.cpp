// Programa de sustituyente con libreria
#include<iostream>
#include"fsustituyente.h"

 int main(){
    char palabra[10];
    char vocales[]={'a','e','i','o','u'};
    char salir;
    int cont,nvocales;
    std::cout <<"Dime una palabra: ";
    std::cin >>palabra;
    for (cont=0; cont<devuelve_longitud(palabra);cont++){
        for(nvocales=0;nvocales<5;nvocales++){
            if (palabra[cont]==vocales[nvocales]){
                palabra[cont]='u';           
            }
        } 
    }
    std::cout<<"Palabra troleada: "<<palabra;
    std::cin >> salir;
}
