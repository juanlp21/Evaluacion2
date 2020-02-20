#include<iostream>
    
int devuelve_longitud(char palabra[]){
    int longitud=0; //vatiable acumuladora
    int cont=0;
    while(palabra[cont]!='\0'){
          longitud++;
          cont++;                     
    }
    return(longitud);
}
int main(){
    //Definición de variables
    char palabra[10],salir, mayuscula;
    int cont;
    std::cout<<"Escriba una palabra ";
    std::cin>>palabra;
    for (cont=0;cont<devuelve_longitud(palabra);cont++){
        if(palabra[cont]>=97 & palabra[cont]<=122){
         std::cout<<palabra[cont]<<"\ntu letra es minuscula\n";
         }
        else{
             std::cout<<"\ntu letra es mayuscula\n"<<palabra[cont];
             }
        }
    for (cont=0;cont<devuelve_longitud(palabra);cont++){
        if(palabra[cont]>=97 & palabra[cont]<=122){
           mayuscula=palabra[cont]-32;
           std::cout<<" "<<mayuscula;
           }
        else{
             std::cout<<" "<<mayuscula;
        }
        }
    std::cin>>salir;
}
    
