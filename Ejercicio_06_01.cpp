// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 20/10/2023

// Fecha modificación: 20/10/2023

// Número de ejericio: 1

// Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de dos
// números enteros aplicando el algoritmo de Euclides.

#include <iostream>

using namespace std;

int euclides(int,int);

int main(){
    int a,b;
    cout<<"Ingrese los dos numeros para hallar el maximo comun divisor, el primero debe ser mayor"<<endl;
    cout<<"El primer numero: ";
    cin>>a;
    cout<<"El segundo numero: ";
    cin>>b;
    cout<<"El maximo comun divisor es: "<<euclides(a,b);
    return 0;
}

int euclides(int a,int b){      // el algoritmo tiene 4 condiciones
    if(a>0&&b==0){      // cuando se tiene que el primer termino es diferente a 0 y el segundo es igual 1 es el MCD
        return a;
    }
    else{
        if(b==0){       // si el termino b es 0 el MCD es a
            return a;
        }
        else{
            if(a==0){       // si el termino a es 0 el MCD es b
                return b;
            }
            else{
                return euclides(b,a%b);     // si ninguna de las condicionee el termino b es a y b es el residuo de a/b
            }
        }
    }
}
