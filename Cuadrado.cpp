#include<iostream>
/*Vamos a hacer un cuadrado del tamaño que nos diga el usuario*/


int main(){
    //Definicion de variables
    char salir;
    int lado;
    int col,fil;
    std::cout<<"Dime el tamano del caudrado: ";
    std::cin>>lado;
    for(col=1;col<=lado;col++){
                               for(fil=1;fil<=lado;fil++){
                                        std::cout<<'*';
                               }
                               std::cout<<"\n";//fin de fila
    }
    std::cin>>salir;
}
