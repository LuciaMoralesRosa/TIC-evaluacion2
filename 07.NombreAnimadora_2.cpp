#include<iostream>
//Introduces un nombre, te lo deletrea, cuenta las letras y despues te hace la media de letras de 4 y 5 nombres
int main(){
    char salir;
	char respuesta1;
    char palabra[10];
    int cont;
    char nom1[10];
    char nom2[10];
    char nom3[10];
    char nom4[10];
    int longitud=0;//inicializo la variable
    int longitud1=0;
    int longitud2=0;
    int longitud3=0;
    int longitud4=0;
    int mediac, medias;

    std::cout<<"Dime tu nombre: ";
    std::cin>> palabra;
    std::cout << "\n  ";
    std::cout << palabra;
    std::cout << "...";
    std::cout <<"\n  ¡Que nombre mas bonito!";
    std::cout <<"\n\n  La primera letra de tu nombre es la: ";
    std::cout <<palabra[0];
    std::cout <<"\n\n\n*ANIMADORA*:\n\n";
    for(cont=0;palabra[cont]!='\0';cont++){
                               std::cout<<"	*\ Dame una ";
                               std::cout<< palabra[cont];
                               std::cout<< " /*\n";
                               }
//  Dirty trick
    cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;
                               }
    
    
    std::cout<<"\n\n  El nombre de ";
    std::cout<< palabra;
    std::cout<<" tiene ";
    std::cout<< longitud;
    std::cout<<" letras ";
    
    if (longitud>6){
    	std::cout << "  \nWow\n  Tu nombre tiene mas letras que la media!";
	}
	else{
		std::cout << "\n  Tu nombre tiene una longitud dentro de la media";}
	std::cout << "\n\n  Quiere saber cual es la longitud media de los nombres de sus conocidos? (s/n): ";
	std::cin >> respuesta1;
	if (respuesta1== 's' || respuesta1== 'S'){
		std::cout <<"\n  Bien, introduzca los '4' nombres a continuacion: ";
		std::cout << "\n\n	Nombre 1: ";
		std::cin >> nom1;
		std::cout << "	Nombre 2: ";
		std::cin >> nom2;
		std::cout << "	Nombre 3: ";
		std::cin >> nom3;
		std::cout << "	Nombre 4: ";
		std::cin >> nom4;
		
	cont=0;
    while(nom1[cont]!='\0'){
                               longitud1++;
                               cont++;
                               }
    
    
    std::cout<<"\n El nombre de ";
    std::cout<< nom1;
    std::cout<<" tiene ";
    std::cout<< longitud1;
    std::cout<<" letras ";
	
	cont=0;
    while(nom2[cont]!='\0'){
                               longitud2++;
                               cont++;
                               }
    
    
    std::cout<<"\n El nombre de ";
    std::cout<< nom2;
    std::cout<<" tiene ";
    std::cout<< longitud2;
    std::cout<<" letras ";
    
    cont=0;
    while(nom3[cont]!='\0'){
                               longitud3++;
                               cont++;
                               }
    
    
    std::cout<<"\n El nombre de ";
    std::cout<< nom3;
    std::cout<<" tiene ";
    std::cout<< longitud3;
    std::cout<<" letras ";
    
    cont=0;
    while(nom4[cont]!='\0'){
                               longitud4++;
                               cont++;
                               }
    
    
    std::cout<<"\n El nombre de ";
    std::cout<< nom4;
    std::cout<<" tiene ";
    std::cout<< longitud4;
    std::cout<<" letras ";
    
    medias=(longitud1+longitud2+longitud3+longitud4)/4;
    mediac=(longitud+longitud1+longitud2+longitud3+longitud4)/5;
    
    std::cout <<"\n\nLa media sin incluir tu nombre es de " << medias << ". E incluyendo el tuyo es de " << mediac;
		
	
		std::cout << "\nGracias por utilizar mi programa, corra la voz a sus cuatro amigos y nos vemos en otra ocasion";}
	else{
	
		std::cout << "\nEsta bien, hasta otra";}
		
		
    std::cin>> salir;
}
