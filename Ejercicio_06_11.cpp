// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 11

/* Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado un
entero n > 1, calcule e imprima los elementos correspondientes a la conjetura
de Ullman (en honor al matemático Ullman) que consiste en lo siguiente:
• Empiece con cualquier entero positivo.
• Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
• Obtenga enteros sucesivamente repitiendo el proceso.
Al final se obtendrá el número 1, independientemente del entero inicial. Por
ejemplo, cuando el entero inicial es 26, la secuencia será:
26 13 40 20 10 5 16 8 4 2 1 */

#include <iostream>

using namespace std;

int ullman(int);

int main(){
    int n;
    cout<<"Ingrese el valor de n: ";
    cin>>n;
    ullman(n);
    return 0;
}

int ullman(int a){      // algoritmo de ullman
    cout<<a<<" ";       // se imprimen los terminos hasta llegar a 1
    if(a==1){
        a=1;
    }
    else{       // hay condiciones
        if(a%2==0){
            a=ullman(a/2);      // si es par se retorna el valor dividido entre 2
        }
        else{
            a=ullman((a*3)+1);      // si es impar se retorna el valor pos 3 mas 1
        }
    }
    return a;
}
