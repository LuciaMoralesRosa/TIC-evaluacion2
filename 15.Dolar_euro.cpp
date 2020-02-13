//Programa que pasa de dolares a euros o de euros a dolares

#include<iostream>

using namespace std;

int main(){
	char salir;
	int respuesta;
	float dolares, euros, r_euros, r_dolares;
	float dolar_euro = 0.92;
	float euro_dolar = 1.08;
	
	cout << "¿Que cambio desea realizar?\nDe dolares a euros = 1\nDe euros a dolares = 2";
	cout << "\nSu opcion es la numero:"; cin >> respuesta; 
	
	if (respuesta == 1){
		cout << "Ingrese los dolares:"; cin >> dolares;
		r_euros = dolar_euro*dolares;
		cout << dolares << " dolares equivalen a " << r_euros << " euros";
	}
	if (respuesta == 2){
		cout << "Ingrese los euros:"; cin >> euros;
		r_dolares = euro_dolar*euros;
		cout << euros << " euros equivalen a " << r_dolares << " dolares";
	}
	else{
		cout<<"Introduzca una opcion valida";
	}
	cin >> salir;
}
