#include<iostream>
/*Programa que nos pida 4 numeros y los guarde*/

int main(){
    //Definicion de variables
    char salir;
    int num[4];
    int cont;
    float suma_numero;
    float media;
    //Introducimos los numeros en el vector
    for (cont=0;cont<=3;cont++){
        std::cout<<"Dime la nota: ";      
        std::cin>>num[cont];
        }
    //Sacamos los numeros guardados
    std::cout<<"Has metido los siguientes numeros\n";
    for(cont=0;cont<=3;cont++){
                               std::cout<<num[cont];
                               std::cout<<"\n";
                               }
    //Calculamos la media
    std::cout<<"Media\n";
    suma_numero=0;
    for (cont=0;cont<=3;cont++){
        suma_numero=suma_numero+num[cont];//Suma acumulada
    }
    std::cout<<"La suma vale: ";
    std::cout<<suma_numero;
    std::cout<<"\n";
    media=suma_numero/4;
    std::cout<<"La media vale: ";
    std::cout<<media;
    //Motramos la lista en orden inverso
     for(cont=3;cont<=0;cont--){
                                std::cout<<num[cont];
                                }
    std::cin>>salir;
}
