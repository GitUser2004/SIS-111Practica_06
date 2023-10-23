// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 4

// Problema planteado: Realizar un algoritmo recursivo que escriba al revés una cadena.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int llenar(int[],int);
int reversa(int[],int);

int main(){
    int n;      // numero de terminos para la serie
    cout<<"Ingrese el valor de n: ";
    cin>>n;
    int cadena[n];
    llenar(cadena,n);
    reversa(cadena,n);
    return 0;
}

int llenar(int ca[],int a){
    srand(time(NULL));
    for(int i=0;i<a;i++){
        ca[i]=rand()%100;
        cout<<ca[i]<<" ";
    }
}

int reversa(int ca[],int a){
    if(a==-1){
        return 0;
    }
    else{
        cout<<ca[a-1];
        ca[0]=ca[a];
        ca[a]=ca[0];
    }
    return a-1;
}
