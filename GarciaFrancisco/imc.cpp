// creador: Francisco Garcia
/*La instrucción Include le indica al procesador que librería vamos a usar en este caso utilizaremos la librería iostream  que es una librería para poder tener acceso a los dispositivos estándar de entrada y salida de datos.*/
#include<iostream>
/*Da acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.*/
using namespace std;
/*Es la función principal que sirve como punto de partida para la ejecución del programa.*/
int main()
{
/*Sirve para declarar una variable de tipo decimal.*/
	float imc,peso,altura;
	cout<<"Ingresebel peso (kg) : ";
	cin>>peso;
	cout<<"Ingrese la altura (metros) : ";
	cin>>altura;
	imc=peso/(altura*altura);
/*Permite que un programa ejecute unas instrucciones cuando se cumple una condición.*/
	if(imc<18.5){
		cout<<"Usted tiene bajo peso "<<endl;
        }
	if(imc>=18.5 && imc<24.9){
		cout<<"Usted tiene peso normal "<<endl;
	}
	if(imc>=25 && imc<26.9){
                cout<<"Usted tiene sobrepeso grado I "<<endl;         }
	if(imc>=27 && imc<29.9){
                cout<<"Usted tiene sobrepeso grado II "<<endl;        }
	if(imc>=30 && imc<34.9){
                cout<<"Usted tiene obesidad de tipo I "<<endl;        }
	if(imc>=35 && imc<39.9){
                cout<<"Usted tiene obesidad de tipo II "<<endl;       }
	if(imc>=40 && imc<49.9){
                cout<<"Usted tiene obesidad de tipo III (morbida) "<<endl;      }
	if(imc>50){
                cout<<"Usted tiene obesidad de tipo IV (extrema) "<<endl;               }
/*Finaliza la ejecución de una función y devuelve el control a la función de llamada.*/  
       return 0;

}
