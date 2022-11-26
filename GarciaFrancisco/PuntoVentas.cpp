// creador: Francisco Garcia
/*La instrucción Include le indica al procesador que librería vamos a usar en este caso utilizaremos la librería iostream  que es una librería para poder tener acceso a los dispositivos estándar de entrada y salida de datos.*/
#include<iostream>
/*Da acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.*/
using namespace std;
/*Es la función principal que sirve como punto de partida para la ejecución del programa.*/
int main()
{
/*Sirve para declarar una variable de tipo decimal.*/
	float FMGA_y,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn;
/*Sirve para declarar una variable de tipo entero.*/
	int i=0,FMGA_c;
	cout<<"Ingrese FMGA_c : ";
	cin>>FMGA_c;
/*Hace que el conjunto de instrucciones se ejecuten al menos una vez.*/
	do{
		cout<<"Ingrese FMGA_y : ";
		cin>>FMGA_y;
		i=i+1;
		s=s+FMGA_y;
/*Comprueba si cumple cierta condición ejecutándose una y otra vez hasta que deje de cumplirse.*/
	  }while(i<FMGA_c);
	   vb=s;
	   viva=vb*piva/100;
	   vdesc=vb*pdesc/100;
	   vn=vb+viva-vdesc;
	   cout<<"El valor a pagar es de :"<<vn<<endl<<endl;
/*Finaliza la ejecución de una función y devuelve el control a la función de llamada.*/
	   return 0;

}
