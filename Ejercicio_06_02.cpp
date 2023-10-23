// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023

// Número de ejericio: 2

// Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38,
// 49,..., para n términos.

#include <iostream>

using namespace std;

int descomposicion(int);        // funcion para descomponer numeros
int serie(int);     // funcion que genera la serie

int main(){
    int n;      // numero de terminos para la serie
    cout<<"Ingrese el valor de n: ";
    cin>>n;
    for(int i=1;i<=n;i++){      // terminos de la serie
        cout<<serie(i)<<" ";
    }
    return 0;
}

int descomposicion(int a){      // funcion que descompone un numero y suma sus digitos
    int suma=0;
    while(a>0){
        suma=suma+a%10;
        a=a/10;
    }
    return suma;
}

int serie(int x){
    int res;        // varible para los resultados
    if(x==1||x==0){     // los primeros dos terminos seran 1
        res=1;
    }
    else{
        for(int i=1;i<x;i++){       // un for para sumar todos los anteriores terminos para el nuevo
            res=res+descomposicion(serie(i-1));     // enviar cada uno de los terminos para descomponerlos
        }
    }
    return res;
}
