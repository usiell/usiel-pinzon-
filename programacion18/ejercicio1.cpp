//Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//1. Se desea calcular independiente la suma de los números pares e impares comprendidos entre 1 y 200
#include <iostream>
using namespace std;

int sumaPar = 0;
int sumaimpar = 0;
int numero = 0;
int tmp = 0;

void ciclo (){
    for ( numero = 0; numero <= 200; numero++)
{
    tmp = numero % 2;
    if (tmp == 0)
    {
        cout<<numero<<endl;
     sumaPar = sumaPar + numero;
    }
    else
    {
     sumaimpar = sumaimpar + numero;
    }
}
return;
}

int main(){

ciclo();
cout<<"La suma de los números pares es "< sumaPar<<endl;
cout<<"La suma de los números inpares es "< sumaimpar<<endl;

return 0;
}