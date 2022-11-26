// creador: Francisco Garcia
/*La instrucción Include le indica al procesador que librería vamos a usar en este caso utilizaremos la librería iostream  que es una librería para poder tener acceso a los dispositivos estándar de entrada y salida de datos.*/
#include<iostream>
/*Da acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.*/
using namespace std;
/*Es la función principal que sirve como punto de partida para la ejecución del programa.*/
int main()
{
/*Sirve para declarar una variable de tipo entero.*/
	int aa,ma,da,an,mn,dn,a,m,d;
	cout<<"Ingrese la fecha actual: ";
	cin>>aa>>ma>>da;

	cout<<"Ingrese la fecha de nacimiento: ";
	cin>>an>>mn>>dn;
/*Permite que un programa ejecute unas instrucciones cuando se cumple una condición.*/
	if(da>dn){
		d=da-dn;
/*Permite que un programa ejecute unas instrucciones cuando no se cumple la condición.*/
	 }else{

		da=da+30;
		ma=ma-1;
		d=da-dn;
		}
/*Permite que un programa ejecute unas instrucciones cuando se cumple una condición.*/

        if(ma>mn){
                m=ma-mn;
/*Permite que un programa ejecute unas instrucciones cuando no se cumple la condición.*/
         }else{                                               
                ma=ma+12;
                aa=aa-1;
                m=ma-mn;
                }

                a=aa-an;
	
	cout<<"Usted tiene "<<a<<" años, "<<m<<" meses, "<<d<<" dias "<<endl;
/*Finaliza la ejecución de una función y devuelve el control a la función de llamada.*/
	 return 0;

}
