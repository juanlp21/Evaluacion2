#include<iostream>

int main(){
	char salir;
	int respuesta;
	float dolares, euros, veuros, vdolares;
	float dolar_euro = 0.92;
	float euro_dolar = 1.08;
	
	std::cout << "¿Que cambio desea realizar?\nDe dolares a euros = 1\nDe euros a dolares = 2";
	std::cout << "\nSu opcion es la numero:"; 
    std::cin >> respuesta; 
	
	if (respuesta == 1){
		std::cout << "Introduzca los dolares:"; 
        std::cin >> dolares;
		veuros = dolar_euro*dolares;
		std::cout <<"Tu cantidad en euros es "<<veuros << " euros";
	}
	if (respuesta == 2){
		std::cout << "Ingrese los euros:"; 
        std::cin >> euros;
		vdolares = euro_dolar*euros;
		std::cout <<"Tu cantidad en dolares es "<<vdolares << " dolares";
	}
	else{
		std::cout<<"Numero no valido";
	}
	std::cin >> salir;
}
