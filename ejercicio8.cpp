/Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//8.Sumar diez números introducidos por el teclado.
#include <iostream>
using namespace std;

int numero = 0;
double suma = 0;

void ingreso(){
    cin>>numero;
    return;
}

void ciclo(){
    for (int i = 0; i < 10; i++)
    {
        ingreso();
        suma = suma + numero;
    }
return;
}

int main(){
    cout<<"Ingresa 10 números"<<endl;
    ciclo();
    cout<<"La suma de tus 10 número es igual a "<<suma<<endl;
return 0;
}