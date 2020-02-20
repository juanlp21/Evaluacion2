#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *palabra[4];
    char salir;
    char aux;
    int cont;
    for(cont=0;cont<4;cont++){
        std::cout<<"palabra: ";
        std::cin>>aux;
        longitud=devuelve_longitud(aux);
        palabra[cont]=(char *)malloc((longitud+1)*sizeof(char));
    }
    std::cin>>salir;
}
