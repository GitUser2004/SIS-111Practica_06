// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023

// Número de ejericio: 6

// Problema planteado: Realizar un algoritmo recursivo para la siguiente función:

#include <iostream>
#include <cmath>

using namespace std;

int funcion(int);

int main(){
    int n;
    cout<<"Ingrese n para Q(n)=1^2+..."<<endl;
    cin>>n;
    cout<<funcion(n);
    return 0;
}

int funcion(int a){     // la funcion para la funcion
    if(a==0){       // condicion de finalizacion
        return 0;
    }
    else{
        return pow(a,2)+funcion(a-1);   // retorna el cuadrado mas la misma funcion un termino anterior
    }
}
