//Con este programa  puedes crear una piramide normal o invertida

#include <iostream>

using namespace std;

int main(){

    char salir, respuesta;
    int x,y,z,cont;
    int altura;
	int cont=0;
	int hueco;
	int ast;
 	do {
    cout << "Quieres hacer una piramide normal o invertida? (n/i): ";
    cin >> respuesta
    
    if (respuesta == n){

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
	}
	
	if (respuesta == n){
		
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
	}
	}while (respuesta != i || respuesta != n);
	
    
    cin >>salir;
}
