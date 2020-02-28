/Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//7.Sumar los números pares del 2 al 100 e imprimir su valor.
#include <iostream>
using namespace std;

int sumapar = 0;
int numero = 0;
int tmp = 0;

void ciclo (){
    for ( numero = 2; numero <= 100; numero++)
{
    tmp = numero % 2;
    if (tmp == 0)
    {
        cout<<numero<<endl;
        sumapar = sumapar + numero;
    }
}
return;
}

int main(){

ciclo();
cout<<"La suma de los números pares es "<<sumapar<<endl;

return 0;
}