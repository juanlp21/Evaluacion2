#include<iostream>

int main(){
    //Definicion de variables
    char palabra [10];
    char salir;
    int cont;
    int longitud=0;
    std::cout<<"Dime tu nombre:";
    std::cin>>palabra;
    std::cout<<"Tu nombre es ";
    std::cout<<palabra;
    std::cout<<"\nLa primera letra de tu nombre es ";
    std::cout<<palabra[0];
    std::cout<<"\nANIMADORA:\n";
    //for(cont=0;cont<=9;cont++){
       //std::cout<<palabra[cont];
       //std::cout<<"\n";
    //}
    for(cont=0;palabra[cont]!='\0';cont++){
          std::cout<<palabra[cont];
          std::cout<<"\n";
          longitud=longitud+1;
             }
    std::cout<<"Tu nombre tiene ";
    std::cout<<longitud;
    std::cout<<" letras";
    std::cin>>salir;
     
}
