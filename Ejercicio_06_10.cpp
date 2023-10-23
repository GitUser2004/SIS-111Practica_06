// Materia: Programaci�n I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 22/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 10

// Problema planteado: Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de
// la lectura de dos n�meros enteros, a partir de la relaci�n:

#include <iostream>

using namespace std;

int factorial(float);

int main(){
    int n,m;
    cout<<"Ingrese el valor de n: ";
    cin>>n;
    cout<<"Ingrese el valor de m: ";
    cin>>m;
    cout<<(factorial(n))/((factorial(n-m))*(factorial(m)));     // para la relacion se llaman los factoriales requeridos
    return 0;
}

int factorial(float a){     // la funcion genera un factorial de los valores que le dan
    if (a==0)
        a=1;        // al final se multiplica por 1
    else
        a=a*factorial(a-1);     // se multiplica desde el ultimo termino hasta el primero
    return a;
}
