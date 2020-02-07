#include<iostream>
int main (){
    //Definicion de variables
    char salir;
    char respuesta;
    char respuesta2;
    std::cout <<"Hola mundo, mi primer programa\n";
    do{
    	std::cout << "Eres hombre o mujer? (h/m): ";
    	std::cin >> respuesta2;
	}while(respuesta2 != 'h' && respuesta2!= 'H' && respuesta2!='M' && respuesta2!='m');
    if (respuesta2=='M' || respuesta2 =='m'){
		do{
      	std::cout <<"Eres guapa? (s/n): ";
      	std::cin >> respuesta;
    	}while(respuesta != 'S'&& respuesta!='s' && respuesta!='N' && respuesta!='n' );
    		if(respuesta=='S' || respuesta=='s')
      			std::cout <<"Hola guapa";
    		else
      			std::cout <<"Hola fea";}
	else{
		do{
      		std::cout <<"Eres guapo? (s/n): ";
      		std::cin >> respuesta;
    	}while(respuesta != 'S'&& respuesta!='s' && respuesta!='N' && respuesta!='n' );
    		if(respuesta=='S' || respuesta=='s')
      			std::cout <<"Hola guapo";
    		else
      			std::cout <<"Hola feo";}
    std::cin >> salir;
}
