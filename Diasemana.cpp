#include<iostream>
#include<conio.h>


int main(){
	int dia;
	char salir;
	std::cout<<"Introduzca su dia de la semana\nDia: "; 
	std::cin>>dia;
	
	if(dia==1){
		std::cout<<"Lunes";
		}
	else if(dia==2){
		std::cout<<"Martes";
		}
	else if(dia==3){
		std::cout<<"Miercoles";
		}
	else if(dia==4){
		std::cout<<"Jueves";
		}
	else if(dia==5){
		std::cout<<"Viernes";
		}
	else if(dia==6){
		std::cout<<"Sabado";
		}
	else if(dia==7){
		std::cout<<"Domingo";
		}
	else{
		std::cout<<"Introduzca algo valido";
		}
		
	std::cout<<"\n";
	
	std::cin>>salir;
}
