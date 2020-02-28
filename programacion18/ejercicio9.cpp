/Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//9. Calcular la media de cincuenta números e imprimir su resultado

#include <iostream>
using namespace std;

float numero = 0;
float media = 0;
float suma = 0;

void ingreso (){
    cin>>numero;
return;
}

void calculo (){
    for (int i = 0; i < 50; i++)
    {
        ingreso();
        suma = suma + numero;
    }
    media = suma/50;
return;
}

int main(){
    cout<<"Ingresa 50 números"<<endl;
    calculo();
    cout<<"La media de tus 50 números es "<<media<<endl;
return 0;
}