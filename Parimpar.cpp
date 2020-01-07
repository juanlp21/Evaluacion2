#include<iostream>
#include<stdlib.h>

int main(){
    //Definición de variables
    char salir;
    int resto;
    int num;
    //Input
    std::cout<<"Dime el numero: ";
    std::cin>>num;
    resto=num%2;
    //If
    if(resto==0){
                std::cout<<"Es par!";
                }
    else{
         std::cout<<"Es impar!";
         }
    std::cin>>salir;
         
    
    
    
    
}
