#include<iostream>

using 
namespace std;

void rellenos(int N,float **b);

void imprimecabezas(int N,float **b);

void imprime(int N,float **b);

int main(){

cout<<"Escriba un numero del 3 al 11"<<endl;

int N=0;

cin>>N;

if(N<3 || N>11){
    
    cout<<"El numero no esta en el rango"<<endl;
}
    else{
        
float ** matriz =new float *[N];

for (int i =0; i < N; ++i){
    
    matriz[i] =new float[N+2];
}

rellenos(N,matriz);

imprimecabezas(N,matriz);

}

return 
0;

}


void rellenos(int N,float **b){



}

void imprimecabezas(int N, float **b){

float sum=0;

for (int i=0; i<N ;i++){

cout<<b[0][i]<<endl;

sum+=b[0][i];



}
}



void imprime(int N,float **b){

for ( int i=0; i < N+2 ;i++) {

for ( int j=0; j < N ;j++) {

cout<<" "<<b[i][j]<<endl;

}

cout<<endl;

}

}