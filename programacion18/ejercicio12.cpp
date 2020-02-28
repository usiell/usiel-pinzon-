/Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//12.Dados diez números enteros, visualizar la suma de los números pares de la lista, cuántos números 
//pares existen y cuál es la media aritmetica de los numeros impares.

#include <iostream>
using namespace std;

int numero = 0;
int tmp = 0;
int numeropar = 0;
int numeroimpar = 0;
int sumanumeropar = 0;
int sumaimpar = 0;
int medimpar = 0;

void ingreso (){
    cin>>numero;
return;
}

void ciclo (){
    for ( int i = 0; i < 10; i++)
    {
        ingreso();
        tmp = numero%2;
        if (tmp == 0)
        {
            numeropar = numeropar + 1;
            sumanumeropar = sumanumeropar + numero;
        }
        else
        {
            numeroimpar = numeroimpar + 1;
            sumaimpar = sumaimpar + numero;
        }
    }
    medimpar = sumaimpar/numeroimpar;
    cout<<"La cantidad de números pares son: "<<numeropar<<endl;
    cout<<"La suma de los números pares es: "<<sumanumeropar<<endl;
    cout<<"La media de los números impares es: "<<medimpar<<endl;
return;    
}

int main(){
cout<< "Ingrese 10 números naturales"<<endl;
ciclo();
return 0;
}