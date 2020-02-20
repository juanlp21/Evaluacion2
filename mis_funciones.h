
int devuelve_longitud(char aux[]){
    int cont=0;
    int longitud=0;
    while(aux[cont]!='\0'){
    longitud++;
    cont++;
    }
    return(longitud);
}

int puntero(char *pun[]){
    int cont=0;
    
}
void burbuja(char *palabra[]){
    int cont,veces;
    char *paux;
    for(veces=1;veces<4;veces++){
      for(cont=0;cont<3;cont++){
       if(strcmp(palabra[cont],palabra[cont+1])>0){
          paux=palabra[cont];
          palabra[cont]=palabra[cont+1];
          palabra[cont+1]=paux;
          }
       }
    }
}
int devuelve_longitudcons(char caux[]){
    int cont=0;
    int longitudcons=0;
    while(caux[cont]!='\0'){
       if(caux[cont]!='a'||caux[cont]!='e'||caux[cont]!='i'||caux[cont]!='o'||caux[cont]!='u'){
          longitudcons++;
          cont++;
       }
    }
    return(longitudcons);
}
int suma(){
    int a,b;
    return (a+b);
}
