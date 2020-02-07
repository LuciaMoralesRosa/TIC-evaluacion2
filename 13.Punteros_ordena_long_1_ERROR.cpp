//Programa que se encarga de ordenar las palabras segun el numero de letras que tiene
//Inspirado por Cristina Marzo

#include<iostream>
#include"fpaula.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int diferencia_longitud (char *palabra[], char *palabra1[]){
	int cont;
	int diferencia=0;
    diferencia = devuelve_longitud(palabra) - devuelve_longitud(palabra1);
    return (diferencia);
   }

int main (){
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
