//CON ESTE PROGRAMA CONSTRUIMOS UNA PIRAMIDE DE CUALQUIER TAMAÑO

#include<iostream>

using namespace std;

int main(){
    char salir;
    int x,y,z,cont;
    
    cout << "Cual va a ser el tamaño de la piramide? ";
    cin >> x;
    for (cont=0; cont<=x; cont++){
       for (y=0; y<=x-cont; y++){
       cout <<" ";
       }
       for (z=0; z<=(2*cont)-2; z++){
       cout <<"*";
       }
       cout <<"\n";
    }

    
    cin >>salir;
}
