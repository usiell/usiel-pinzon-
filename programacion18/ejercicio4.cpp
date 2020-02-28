/Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//4. Leer 500 números enteros y obtener cuántos son positivos

#include <iostream>
using namespace std;

int numeros = 0;
int numerospositivos = 0; 

void selector (){
for (int i = 0; i < 500; i++)
    {
        cin>>numeros;
        if (numeros > 0)
        {
            numerospositivos = numerospositivos + 1;
        }
        if (numeros == 0)
        {
            cout<<"El 0 no es un número valido"<<endl;
            i= i-1;
        }
    }
return; 
}

int main(){
cout<<"Inserte 500 números diferentes de 0"<<endl;
selector();
cout<<"Los números positivos son "<<numerospositivos<<endl;
return 0;
}