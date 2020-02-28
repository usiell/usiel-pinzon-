/Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//13. Calcular la nota media de los alumnos de una clase considerando n-numero de alumnos y c-numero de notas 
//de cada alumno.

#include <iostream>
using namespace std;

int cantidadalumnos = 0;
int cantidaddenotas = 0;
float valornota = 0;
float sumanotas = 0;
float promedionotas = 0;

void parametros (){
    cout<<"Escriba el número de alumnos"<<endl;
    cin>>cantidadalumnos;
    cout<<"Escriba la cantidad de notas"<<endl;
    cin>>cantidaddenotas;
return;
}

void calificaciones (){
parametros();
    for (int x = 1; x <= cantidadalumnos; x++){
        cout<<"------Ingresando las notas del alumno "<<x<<"------"<<endl;
        for (int i = 1; i <= cantidaddenotas; i++)
        {
            cout<<"Inserte la califiación de la nota "<<i<<endl;
            cin>>valornota;
            sumanotas = valornota + sumanotas;
        }
    }
    promedionotas = sumanotas/(cantidadalumnos*cantidaddenotas);
return;
}

int main(){
    calificaciones();
    cout<<"La nota media de la clase es: "<<promedionotas<<endl;
return 0;
}