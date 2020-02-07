#include<iostream>
//un programa que lea una palabra y te devuelva la inicial
int main(){
    char salir;
    char palabra[10];
    int cont;
    int longitud=0;//inicializo la variable
    std::cout<<"Dime tu nombre: ";
    std::cin>> palabra;
    std::cout << "\n  ";
    std::cout << palabra;
    std::cout << "...";
    std::cout <<"\n  ¡Que nombre mas bonito!";
    std::cout <<"\n\n  La primera letra de tu nombre es la: ";
    std::cout <<palabra[0];
    std::cout <<"\n\n\n*ANIMADORA*:\n\n";
    for(cont=0;palabra[cont]!='\0';cont++){
                               std::cout<<"	*\ Dame una ";
                               std::cout<< palabra[cont];
                               std::cout<< " /*\n";
                               }
//  Dirty trick
    cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;
                               }
    
    
    std::cout<<"\n\nEl nombre de ";
    std::cout<< palabra;
    std::cout<<" tiene ";
    std::cout<< longitud;
    std::cout<<" letras ";
    std::cin>> salir;
}
