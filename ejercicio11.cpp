/Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//11. Diseñar un diagrama que permita realizar un contador e imprimir los cien primeros números enteros.

#include <iostream>
using namespace std;

int numero = 0;

void contador (){
    for (int i = 0; i < 100; i++)
    {
        numero = numero + 1;
        cout<<numero<<endl;
    }
return;   
}

int main(){
    cout<<"El contador ha iniciado"<<endl;
    contador();
return 0;
}