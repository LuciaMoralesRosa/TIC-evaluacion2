// Programa de sustituyente con libreria
#include<iostream>
#include"fsustituyente.h"

 int main(){
    char palabra[10];
    char vocales[]={'a','e','i','o','u'};
    char VOCALES[]={'A','E','I','O','U'};
    char salir;
    int cont,nvocales,NVOCALES;
    std::cout <<"Dime una palabra: ";
    std::cin >>palabra;
    for (cont=0; cont<devuelve_longitud(palabra);cont++){
              for(nvocales=0;nvocales<5;nvocales++){
                   if (palabra[cont]==vocales[nvocales]){
                       palabra[cont]='u';           
                       }
                   } 
    }
    for (cont=0; cont<devuelve_longitud(palabra);cont++){
              for(NVOCALES=0;NVOCALES<5;NVOCALES++){
                   if (palabra[cont]==VOCALES[NVOCALES]){
                       palabra[cont]='U';           
                       }
                   } 
    }
    std::cout<<"Palabra troleada: "<<palabra;
    std::cin >> salir;
}
