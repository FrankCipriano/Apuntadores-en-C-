#include <iostream>
using namespace std;

int main(){
    int variable;
    int *ptrVariable;

    variable = 7;
    ptrVariable = &variable;

    cout<<"DIRECCION DE VARAIBLE & APUNTADOR\nEl valor del apuntador -ptrVariable- o la direccion de memoria  de la variable es: "<<&variable<<" - "<<ptrVariable;
    cout<<"\nEL VALOR DE LA VARIABLE\nEl valor del apuntador -ptrVariable- es: "<<variable<<" - "<<*ptrVariable;
    cout<<"\nQUEDA COMPROBADO QUE * Y & SON COMPLEMENTOS UNO DE OTRO\n&*ptrVariable = *&ptrVariable : "<<&*ptrVariable<<" - "<<*&ptrVariable;
    return 0;
}