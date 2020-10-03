#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion;
    system("cls");
do{
cout<<"*********************"<<endl;
cout<<"   MENU DE JUEGOS"<<endl;
cout<<"*********************"<<endl<<endl;

cout<<"Seleccione Un Juego"<<endl;

cout<<"1 - StarShip  "<<endl;
cout<<"2 - Snake"<<endl;


cout<<"Ingrese un numero del menu para seleccionar un juego:"    "    "<<endl;
cin>> opcion;

switch (opcion)
  {
case 1:
        starShip();
    break;

case 2: 

snake();
break;



default:
 system("cls");
 cout<<"\a";
cout<<"\n===================\n";
cout<<"OPCION NO VALIDA"<<endl;
cout<<"\n===================\n";

   system("pause");
   system("cls");

    break;
   
 
   }
}while(opcion != 1 && opcion !=2);
   

    

    return 0;
}
