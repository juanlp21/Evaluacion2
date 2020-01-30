#include<iostream>
#include<stdio.h>
#include<stdlib.h>

int main(){
    char salir;
    int a;
    int *pa;//"pa" va a guardar un numero hexadecimal que es la localizacion donde vive esa variable
    int numeros[5];
    a=4;
    numeros[0]=9;
    numeros[1]=8;
    numeros[2]=7;
    pa=&a;//Definicion de localizacion de la variable a
    printf("El numero a= %d y esta almacenado en %X",a,&a);
    printf("\nEl contenido del puntero pa=%d",*pa);
    printf("\nnumeros[0]=%d",numeros[0]);
    printf("\nnumeros[1]=%d",numeros[1]);
    printf("\nnumeros[2]=%d",numeros[2]);
    printf("\nnumeros[3]=%d",numeros[3]);
    printf("\nnumeros=%d",*(numeros+1));

    std::cin>>salir;
}
