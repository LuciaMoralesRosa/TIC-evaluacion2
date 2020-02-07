#include<iostream>
int main (){
    //Definicion de variables
    char salir;
    char respuesta;
    std::cout <<"Eres guapo? (s/n): ";
    std::cin >> respuesta;
    if(respuesta == 's' || respuesta =='S' ){
				 std::cout <<"Hola guapo";
    }
    else if (respuesta == 'n' || respuesta == 'N'){
         	std::cout <<"Hola feo";
    }
    else{
			std::cout << "Lo lamento, no ha ingresado una letra valida";
	}
	  	
    std::cin >> salir;
}
