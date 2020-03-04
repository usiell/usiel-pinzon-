/Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//17. Sumar una secuencia de enteros detectando si están ordenados.

#include <iostream>
using namespace std;

int numeroone = 0;
int numerotwo = 0;
int suma = 0;

void registro (){
    cin>>numeroone;
return;
}

void ciclo (){
    for (int i = 0; i < 10; i++)
    {
        registro();
        if (numeroone > numerotwo)
        {
            numerotwo = numeroone;
            suma = numerotwo + suma;
        }
        else
        {
            cout<<"La suma no se podrá hacer porque los números que ingresaste no están ordenados"<<endl;
            return;
        }        
    }
return;    
}

int main(){
    cout<<"Ingrese 10 números enteros"<<endl;
    ciclo();
    cout<<"La suma de sus números es: "<<suma<<endl;
return 0;
}