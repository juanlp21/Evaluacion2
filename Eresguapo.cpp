#include<iostream>


int main(){
    //Definición de variables
    char salir;
	char respuesta;
	std::cout<<"Hola mundo \n";
	std::cout<<"Eres guapo? (s/n): ";
	std::cin>>respuesta;
	//&& significa AND
	//|| significa OR
	if(respuesta=='s'){
		std::cout<<"Hola guapo";
	}
    else{
		std::cout<<"Hola feo";
	}
    std::cin>>salir;
    
}
