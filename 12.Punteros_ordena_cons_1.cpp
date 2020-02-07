//Este programa  ordena las palabras segun el numero de consonantes

#include<iostream>
#include"fpaula.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int diferencia_consonantes (char *palabra, char *palabra1){
    int cont;
    int resultado=0;
    resultado = contador_consonantes(palabra) - contador_consonantes(palabra1);
    return (resultado);
}


int main(){
    char *palabra[4];
    // Leo 4 palabras
    int cont;
    char salir;
    char aux[20];
    char *paux;
    int longitud;
    int veces;
    for (cont=0;cont<4;cont++){
        cout << "Palabra "<<cont+1<<": ";
        cin >> aux;
        palabra[cont]= (char *) malloc((longitud+1)*sizeof(char));
        strcpy(palabra[cont], aux);
    }
    cout << "\nLista de palabras: \n	";
    for (cont=0;cont<3;cont++){
        printf ("%s, ", palabra[cont]);
        }
    cout << palabra[3] << "\n";
        
    //ORDENAMOS POR EL METODO DE LA BURBUJA
    for(veces=1;veces<4;veces++){
        for (cont=0;cont<3;cont++){
            if (diferencia_consonantes(palabra[cont], palabra[cont+1])<0){ 
			//si la longitud es menos que 0 significa que las palabras estan al reves por numero de consonantes
				paux=palabra[cont];
              	palabra[cont]=palabra[cont+1];
               	palabra[cont+1]=paux;
        	}
    	}
    }
    cout<<"\nLista de palabras ordenadas: \n";
    for(cont=0;cont<4;cont++){
 	    printf("  %s\n",palabra[cont]);
    }
        
	cin >> salir;
}
