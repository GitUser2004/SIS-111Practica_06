// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023

// Número de ejericio: 7

/* Problema planteado: Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
más en ser también productiva, ¿cuántos pares de conejos podrá poner a la
venta el granjero al cabo de un año? */

#include <iostream>

using namespace std;

int conejos(int);

int main(){
    int n;
    cout<<"Ingrese numero de meses: ";
    cin>>n;
    cout<<"Habran "<<conejos(n)<<" pares de conejos";
    return 0;
}

int conejos(int a){     // funcion que dice los pares existentes
    if(a==0){
        return 1;       // al final se multiplica por 1
    }
    else{
        return 2*conejos(a-1);      // con cada retorno el resultado se multiplica a si mismo por 2
    }
}
