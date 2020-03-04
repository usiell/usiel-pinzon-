/Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//6. Calcular la suma de los cuadrados de los cien primeros números naturales.

#include <iostream>
#include <math.h>
using namespace std;

unsigned int numero = 0;
double cuadrado = 0; 
double suma = 0; 

void ciclo (){
for (numero = 0; numero <= 100; numero++)
{
    cuadrado = pow (numero, 2);
    suma = suma + cuadrado;
}
return;
}

int main(){
ciclo();   
cout<<"La suma de los cuadrados de los cien primeros números naturales es "<<suma<<endl;


return 0;
}