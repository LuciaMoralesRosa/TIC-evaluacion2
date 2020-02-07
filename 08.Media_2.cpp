//Este programa calcula la media de un maximo de 8 numeros

#include<iostream>

using namespace std;

int main(){
	char salir;
	int num[8];
	int cont, numeros;
	float suma_numero;
	float media; 
	
	cout << "De cuantos numeros quieres hacer la media? (Escriba un numero del 2 al 8): ";
	cin >> numeros;
	
	if (numeros == 2){
		cout << "A continuacion introduce " << numeros << " numeros\n";
		for (cont=0;cont<=1;cont++){
			cout<<"Numero " << cont+1 <<": ";
			cin>>num[cont];    
		}      

		cout <<"La media de los numeros: "; 
		for (cont=0;cont<=0;cont++){
			cout <<num[cont] << ", ";}
		cout << "y " << num[1];
		cout << " es ";
		suma_numero=0;
		for (cont=0;cont<=1;cont++){
			suma_numero = suma_numero+num[cont];
		}
		media=suma_numero/2;
		cout << media;
	}
		
		
	if (numeros == 3){
		cout << "A continuacion introduce " << numeros << " numeros\n";
		for (cont=0;cont<=2;cont++){
			cout<<"Numero " << cont+1 <<": ";
			cin>>num[cont];    
		}      

		cout <<"La media de los numeros: "; 
		for (cont=0;cont<=1;cont++){
			cout <<num[cont] << ", ";}
		cout << "y " << num[2];
		cout << " es ";
		suma_numero=0;
		for (cont=0;cont<=2;cont++){
			suma_numero = suma_numero+num[cont];
		}
		media=suma_numero/3;
		cout << media;
	}
	
	
	if (numeros == 4){
		cout << "A continuacion introduce " << numeros << " numeros\n";
		for (cont=0;cont<=3;cont++){
			cout<<"Numero " << cont+1 <<": ";
			cin>>num[cont];    
		}      

		cout <<"La media de los numeros: "; 
		for (cont=0;cont<=2;cont++){
			cout <<num[cont] << ", ";}
		cout << "y " << num[3];
		cout << " es ";
		suma_numero=0;
		for (cont=0;cont<=3;cont++){
			suma_numero = suma_numero+num[cont];
		}
		media=suma_numero/4;
		cout << media;
	}
	
	if (numeros == 5){
		cout << "A continuacion introduce " << numeros << " numeros\n";
		for (cont=0;cont<=4;cont++){
			cout<<"Numero " << cont+1 <<": ";
			cin>>num[cont];    
		}      

		cout <<"La media de los numeros: "; 
		for (cont=0;cont<=3;cont++){
			cout <<num[cont] << ", ";}
		cout << "y " << num[4];
		cout << " es ";
		suma_numero=0;
		for (cont=0;cont<=4;cont++){
			suma_numero = suma_numero+num[cont];
		}
		media=suma_numero/5;
		cout << media;
	}	
	
	if (numeros == 6){
		cout << "A continuacion introduce " << numeros << " numeros\n";
		for (cont=0;cont<=5;cont++){
			cout<<"Numero " << cont+1 <<": ";
			cin>>num[cont];    
		}      

		cout <<"La media de los numeros: "; 
		for (cont=0;cont<=4;cont++){
			cout <<num[cont] << ", ";}
		cout << "y " << num[5];
		cout << " es ";
		suma_numero=0;
		for (cont=0;cont<=5;cont++){
			suma_numero = suma_numero+num[cont];
		}
		media=suma_numero/6;
		cout << media;
	}	
		

	if (numeros == 7){
		cout << "A continuacion introduce " << numeros << " numeros\n";
		for (cont=0;cont<=6;cont++){
			cout<<"Numero " << cont+1 <<": ";
			cin>>num[cont];    
		}      

		cout <<"La media de los numeros: "; 
		for (cont=0;cont<=5;cont++){
			cout <<num[cont] << ", ";}
		cout << "y " << num[6];
		cout << " es ";
		suma_numero=0;
		for (cont=0;cont<=6;cont++){
			suma_numero = suma_numero+num[cont];
		}
		media=suma_numero/7;
		cout << media;
	}
	
	if (numeros == 8){
		cout << "A continuacion introduce " << numeros << " numeros\n";
		for (cont=0;cont<=7;cont++){
			cout<<"Numero " << cont+1 <<": ";
			cin>>num[cont];    
		}      

		cout <<"La media de los numeros: "; 
		for (cont=0;cont<=6;cont++){
			cout <<num[cont] << ", ";}
		cout << "y " << num[3];
		cout << " es ";
		suma_numero=0;
		for (cont=0;cont<=7;cont++){
			suma_numero = suma_numero+num[cont];
		}
		media=suma_numero/8;
		cout << media;
	}	
	
	cin >> salir;
}
