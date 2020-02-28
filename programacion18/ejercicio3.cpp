//Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//3. Calcular y visualizar la suma y el producto de los números pares comprendidos entre 20 y 400, 
//ambos inclusive.

#include <iostream>
using namespace std;

int suma = 0;
float producto = 1;
int numero = 0;
int tmp = 0;

void ciclo (){
    for (numero = 20; numero <= 400; numero++)
    {
        tmp = numero % 2;
        if (tmp == 0)
        {
            cout<<numero<<endl;
            suma = suma + numero;
            producto = producto * numero;
        }
    }
return;
}

int main(){

ciclo();
cout<<"La suma de los números pares comprendidos entre 20 y 400 es "<<suma<<endl;
cout<<"El producto de los números pares comprendidos entre 20 y 400 es "<<producto<<endl;

return 0;
}