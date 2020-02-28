//Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//2.Leer una serie de números distintos de cero (el último número de la series es -99) y obtener el número mayor. 
//Como resultado se debe visualizar el número mayor y un mensaje de indicación de número negativo, 
//caso de que se haya lédio un numero negativo.

#include <iostream>
using namespace std;

int numero = 0;
int numeromayor = 0;

void ciclo (){
    for (int i = 0; i < 10; i++)
    {
        cout<<"Inserte un número diferente a 0 y mayor a -99"<<endl;
        cin>>numero;
        if (numero != 0 && numero >-99 && numero > numeromayor)
        {
         numeromayor = numero;
        }
        if (numero == 0 || numero <-99)
            {
            cout<<"Numero no valido "<<endl;
            i= i-1;
            }
    }
return;   
}

int main(){
    ciclo ();
    cout<<"El numero mayor es "< numeromayor<<endl;    
    return 0;
}