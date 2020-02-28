/Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//16.Desarrollar un algoritmo que determine en un conjunto de 100 numeros naturales:
//-¿Cuántos son menores de 15?
//-¿Cuántos son mayores de 50?
//-¿Cuantos están comprendidos entre 25 y 45?

#include <iostream>
using namespace std;

int menores15 = 0;
int mayores50 = 0;
int entre = 0;
int numero = 0;

void ingreso (){
    cin>>numero;
return;
}

void ciclo (){
    for (int i = 0; i < 100; i++)
    {
        ingreso();
        if (numero < 15)
        {
            menores15 = menores15 + 1;
        }
        if (numero > 50)
        {
            mayores50 = mayores50 + 1;
        }
        if (numero >=25 && numero <=45 )
        {
            entre = entre + 1;
        }        
    } 
}

int main(){
cout<<"Ingrese 100 números naturales"<<endl;
ciclo();
cout<<"Los números menores a 15 fueron: "<<menores15<<endl;
cout<<"Los números mayores a 50 fueron: "<<mayores50<<endl;
cout<<"Los números entre 25 y 45 fueron: "<<entre<<endl;
return 0;
}