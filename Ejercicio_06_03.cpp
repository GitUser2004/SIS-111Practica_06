// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 20/10/2023

// Fecha modificación: 20/10/2023

// Número de ejericio: 3

// Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la
// suma de sus elementos.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int llenarvector(int,int[]);        // funcion para llenar el vector
int sumavector(int,int[]);      // funcion para sumar el vector

int main(){
    int n;
    cout<<"Ingrese el tamaño del vector: ";
    cin>>n;
    int vect[n];
    llenarvector(n,vect);       // llamada de las funciones
    cout<<endl<<"La suma del vector es de: "<<sumavector(n,vect);
    return 0;
}

int llenarvector(int n,int vect[]){     // generacion aleatoria del vector
    srand(time(NULL));
    for(int i=0;i<n;i++){
        vect[i]=rand()%100;
        cout<<vect[i]<<" ";
    }
}

int sumavector(int a,int vect[]){
    if(a==0){       // cuando se llegue a la primera posicion se regresa el valor de esta posicion
        return vect[0];
    }
    else{
        return vect[a]+sumavector(a-1,vect);    // se va sumando desde el final hasta el principio
    }
}
