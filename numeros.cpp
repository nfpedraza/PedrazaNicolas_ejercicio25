#include <iostream>
#include <cmath>


int N;
float Mat[0][0];
int lleno;

float Relleno(){
    for (int i = 0; i < N+2; i++){
        for (int j = 0; j < N; j++){
            lleno= i+j;
            Mat[i][j]=lleno;
        }
    }
}
    
int ImprimeCabezas(){
       
    
    
}    
    

int main(void){
    
    std::cout<<"Escriba un numero del 3 al 11"<<std::endl;
    std::cin>>N;
    if(N<3 || N>11){
        
        std::cout<<"El numero esta afuera del rango"<<std::endl;
    }
    
    else{
        
         std::cout<<"Numero: "<<" "<<N<<" "<<"Matriz: "<<" "<< Relleno <<std::endl;
    }
   
    return 0;
}