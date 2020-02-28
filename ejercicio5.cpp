/Instituto Tecnologico Superior de Calkini en el Estado de Campeche.
//Mecatronica "8" "A" 
// Usiel Abner Pinzon Contreras 5703

//5. Se trata de escribir el algoritmo que permita emitir la factura correspondiente a una compra de 
//un artículo determinado, del que se adquieren una o varías unidades. El IVA a aplicar es del 15 por 100 
//y si el precio bruto (precio venta más IVA) es mayor de 50.000 pesetas, se debe realizar un descuento 
//del 5 por 100

#include <iostream>
using namespace std;

float producto = 0; //Precio 
int cantidad = 0;  //Cantidad de productos 
float iva = 0.15; //Será igual al 15% del costo total
float costoeiva = 0; //Costo+iva
float costobruto = 0; //Costo bruto - descuento
float descuento = 0.05; 

void ingreso (){
cout<<"Ingrese el precio del producto "<<endl;
cin>>producto;
cout<<"Ingrese la cantidad de productos "<<endl;
cin>>cantidad;
return;
}

void calculo (){
ingreso();
producto = producto*cantidad;
costoeiva = (producto * iva) + producto;
if (costoeiva > 50000)
{
    costobruto = costoeiva - (costoeiva*descuento);
    cout<<"¡Su compra tuvo descuento! "<<endl;
    cout<<"El precio final es $"<<costobruto<<endl;
}
else
{
    cout<<"Su compra no tuvo descuento "<<endl;
    cout<<"El precio final es $"<<costoeiva<<endl;
}
return;
}
int main(){
calculo();

return 0;
}