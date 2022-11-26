// creador: Francisco Garcia
/*La instrucción Include le indica al procesador que librería vamos a usar en este caso utilizaremos la librería iostream que es una librería para poder tener acceso a los dispositivos estándar de entrada y salida de datos.*/                      
#include<iostream>
/*Da acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.*/                
using namespace std;                                          
/*Es la función principal que sirve como punto de partida para la ejecución del programa.*/                                 
int main()                                                    
{                                                             
/*Sirve para declarar una variable de tipo decimal.*/
        float FMGA_y,pm=0;                                    
/*Sirve para declarar una variable de tipo entero.*/                  
        int i=0,FMGA_c;
        cout<<"Ingrese FMGA_c: ";                                     
        cin>>FMGA_c;                                          
/*Hace que el conjunto de instrucciones se ejecuten al menos una vez.*/                                                             
        do{                                                                   
                cout<<"Ingrese FMGA_y: ";                                     
                cin>>FMGA_y;
                i=i+1;                                        
/*Permite que un programa ejecute unas instrucciones cuando se cumple una condición*/
                if(FMGA_y>pm){
                        pm=FMGA_y;                                      
                }                                                   
/*Comprueba si cumple cierta condición ejecutándose una y otra vez hasta que deje de cumplirse.*/                                   
        }while(i<FMGA_c);
           cout<<"El promedio maximo del curso fue :"<<pm<<endl<<endl;                                                      
/*Finaliza la ejecución de una función y devuelve el control a la función de llamada*/
           return 0;

}
