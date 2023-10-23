// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023

// Número de ejericio: 5

// Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son iguales.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int llenarvectores(int[],int[],int);
int comparacion(int[],int[],int);

int main(){
    int n;
    cout<<"Ingrese el tamaño de los vectores: ";
    cin>>n;
    int vec1[n],vec2[n];        // declaracion de los vectores
    llenarvectores(vec1,vec2,n);
    if(comparacion(vec1,vec2,n)==0){    // la funcion que compara lanza un resultado que dice si son diferentes o no
        cout<<endl<<"Son diferentes";
    }
    else{
        cout<<endl<<"Son iguales";
    }
    return 0;
}

int llenarvectores(int v1[],int v2[],int a){        // llena los vectores
    srand(time(NULL));
    for(int i=0;i<a;i++){
        v1[i]=rand()%100;       // genera el primer vector
        //v2[i]=rand()%100;     //genera el segundo vector (diferente)
        v2[i]=v1[i];            // iguala el segundo vector al primer vector (iguales)
        cout<<v1[i]<<" "<<v2[i]<<endl;
    }
}

int comparacion(int v1[],int v2[],int b){
    if(b==0){       // cuando se llega a la primera posicion hay dos posibilidades
        if(v1[b]==v2[b]){       // si la primera posicion es igual en ambos vectores regresa un 1
            return 1;
        }
        else{       // sino un 0 que es diferente
            return 0;
        }
    }
    else{
        if(v1[b-1]==v2[b-1]){       // se comparan posiciones
            return comparacion(v1,v2,b-1);      // la recursividad solo se ejecuta si las posiciones son iguales
        }
        else{
            return 0;       // si existe alguna diferencia son diferentes definitivamente
        }
    }
}
