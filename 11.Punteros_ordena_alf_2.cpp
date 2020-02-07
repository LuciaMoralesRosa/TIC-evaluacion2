#include <iostream>
#include <stdio.h> // para los printf
#include <stdlib.h> // para los malloc
#include <string.h> // para strcpy
#include "fpaula.h"

//Este programa lee 4 palabras, las guarda y las ordena alfabeticamente
using namespace std;

int main(){
    char *palabra[4];
    // Leo 4 palabras
    int cont, longitud;
    char salir;
    char aux[20];
    char *paux;
    int veces;
    for (cont=0;cont<4;cont++){
        cout << "Palabra "<<cont+1<<": ";
        cin >> aux;
        longitud = devuelve_longitud(aux);
        cout<<"Tiene "<<longitud<<" letras\n";
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
               if (strcmp(palabra[cont], palabra[cont+1])>0){
                  paux=palabra[cont];
                  palabra[cont]=palabra[cont+1];
                  palabra[cont+1]=paux;
               }
            }
        }
        
        cout<<"\nLista de palabras ordenadas alfabeticamente\n";
        for(cont=0;cont<4;cont++){
          printf("%s\n",palabra[cont]);
        }
		        
    cin >> salir;
}
