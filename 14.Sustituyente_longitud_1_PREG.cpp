//PREGUNTAR A ANTONIO POR EL BUCLE, PQ NO SE REPITE??


//En este programa vamos a sustituir la vocal a por la o en las palabras de menos de 5 letras
#include <iostream>


using namespace std;


int devuelve_longitud(char palabra[]){
    int longitud=0;
    int cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;
                               }
    return (longitud);
}


int main(){
	//Definicion de variables

	char salir;
	char avocal[]={'a'};
	int cont;
	char aux[20];
	int longitud;
	int navocal;
	
	
	//Programa
	cout << "En este programa vamos a sustituir la vocal a por la o en las palabras de menos de 5 letras\n";
	cout << "Por favor, ahora introduzca 4 palabras\n";
	for (cont=0;cont<4;cont++){
		cout << "Palabra " << cont+1 << ": ";
		cin >> aux;
		longitud = devuelve_longitud(aux);
		cout << "  " << aux << " tiene " << longitud << " letras\n";
		
		if (longitud<5){
			for (cont=0; cont<devuelve_longitud(aux);cont++){
        		for(navocal=0;navocal<5;navocal++){
            		if (aux[cont]==avocal[navocal]){
                		aux[cont]='o'; 
            		}
        		} 
    		}
    		std::cout<<"Palabra nueva: "<<aux;
    	
			
		}
	}
	
	
		
	cin >> salir;
}
