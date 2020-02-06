#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<mis_funciones.h>

int main(){
    char *palabra[4];
    char *paux;
    int cont,longitud,veces;
    char salir;
    char aux[20];
    for(cont=0;cont<4;cont++){
        std::cout<<"palabra: ";
        std::cin>>aux;
        longitud=devuelve_longitud(aux);
        std::cout<<longitud<<"\n";
        palabra[cont]=(char *)malloc((longitud+1)*sizeof(char));//Reserva
        //std::cout<<palabra[cont]<<"/n";
        strcpy(palabra[cont],aux);
    }
    std::cout<<"\nLista de palabras\n";
    for(cont=0;cont<4;cont++){
       printf("%s\n",palabra[cont]);
    }
    //Oirdenamos mediante el metodo de burbuja
    burbuja(palabra);
    std::cout<<"\nLista de palabras ordenadas\n";
    for(cont=0;cont<4;cont++){
       printf("%s\n",palabra[cont]);
    }
    std::cin>>salir;
}
