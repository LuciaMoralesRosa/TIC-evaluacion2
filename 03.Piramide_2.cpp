//CON ESTE PROGRAMA CONSTRUIMOS UNA PIRAMIDE INVERTIDA DE CUALQUIER TAMAÑO

#include<iostream>
using namespace std;
int main(){
    int altura, cont, hueco, ast;
    char salir;
    cout<<"Cual va a ser la altura de la piramide?: ";
    cin>> altura;
    for (cont=1;cont<=altura;cont++){
        for (hueco=1;hueco<=cont;hueco++){
            cout<<" ";
            }
            for (ast=1;ast<=(altura+1-cont)*2-1;ast++){
                cout<<"*";
                }
                cout<<"\n";          
    }      
                
    



std::cin>> salir;
}
