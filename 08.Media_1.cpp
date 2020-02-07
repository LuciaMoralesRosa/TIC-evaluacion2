//Este programa calcula la media de 8 numeros

#include<iostream>
int main(){
	char salir;
	int num[8];
	int cont;
	float suma_numero;
	float media; //float porque es decimal
	std::cout << "A continuacion introduce 8 numeros\n";
	for (cont=0;cont<=7;cont++){
		std::cout<<"Numero " << cont+1 <<": ";
		std::cin>>num[cont];    
	}      

	std::cout <<"La media de los numeros "; 
	for (cont=0;cont<=6;cont++){
		std::cout <<num[cont] << ", ";}
	std::cout << "y " << num[7];
	std::cout << " es ";
	suma_numero=0;
	for (cont=0;cont<=7;cont++){
		suma_numero = suma_numero+num[cont];
	}
	media=suma_numero/8;
	std::cout << media;
	
	std::cin >> salir;
}
