/Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//14. Escribir la suma de los diez primeros numeros pares.

#include <iostream>
using namespace std;

int numero = 0;
int suma = 0;
int tmp = 0;

void ciclo (){
    for (int i = 0; i < 10; i++)
    {
        numero = numero + 1;
        tmp = numero % 2;
        if (tmp == 0)
        {
            suma = suma + numero;
        }
        else
        {
            i= i-1;
        }        
    }
return;   
}

int main(){
    ciclo();
    cout<<"La suma de los primeros 10 números pares es: "<<suma<<endl;
return 0;
}