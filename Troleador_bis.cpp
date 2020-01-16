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
    char palabra[10];
    char vocales[]={'a','e','i','o','u'};
    int cont,nvocales,cont2,vocal=0,numvocales;
    char salir;
    std::cout<<"Escriba una palabra ";
    std::cin>>palabra;
    for (cont=0;cont<devuelve_longitud(palabra);cont++){
        for(nvocales=0;nvocales<5;nvocales++){
              if (palabra[cont]==vocales[nvocales]){
                   palabra[cont]='e';
                   }
              }
        }
    for (cont2=0;cont2<devuelve_longitud(palabra);cont2++){
        for (numvocales=0;numvocales<5;numvocales++){
            if(palabra[cont2]==vocales[numvocales]){
             vocal++;
             }
           }
        }
    
    std::cout<<"Palabra troleada: "<<palabra;
    std::cout<<"\n num vocales son: "<<vocal;
    std::cout<<"\n num consonantes son: ";
    std::cout<<devuelve_longitud(palabra)-vocal;
    
    std::cin>>salir;
}
