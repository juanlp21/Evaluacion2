#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char salir;
    int cont;
    int *pun;
    struct Amigo{
           int n_amigo;
           float money;
    };
    typedef struct{
            char nombre [20];
            int edad;
            char email[20];
            } datosPersona;
    datosPersona alumno[3];
    datosPersona*p_aux;
    p_aux=&alumno[3];        
    //=(datosPersona *)malloc(20*sizeof(datosPersona))
    for(cont=0;cont<3;cont++){
      std::cout<<"Dime tu nombre: ";
      std::cin>>alumno[cont].nombre;
    }
    std::cout<<"\nLISTA DE CLASE";
    for(cont=0;cont<3;cont++){
      std::cout<<"\nAlumno "<<cont+1<<" "<<alumno[cont].nombre;
    }
    Amigo misAmigos[3];
    for(cont=0;cont<3;cont++){
       std::cout<<"\nDime tu numero: ";
       std::cin>>misAmigos[cont].n_amigo;
       std::cout<<"Dime cuanto dinero tienes: ";
       std::cin>>misAmigos[cont].money;
     }
    //Recupero los datos de mi amigo pepito
    for(cont=0;cont<3;cont++){
       std::cout<<"Yo tengo un amigue que se llama pepito";
       std::cout<<"\nPepito es mi amigo num.: "<<misAmigos[cont].n_amigo;
       std::cout<<"\n Y tiene: "<<misAmigos[cont].money<<" euros.";
    }
    std::cin>>salir;
}
