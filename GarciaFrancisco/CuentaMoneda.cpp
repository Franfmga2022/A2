// creador: Francisco Garcia                                 
/*La instrucción Include le indica al procesador que librería vamos a usar en este caso utilizaremos la librería iostream que es una librería para poder tener acceso a los dispositivos estándar de entrada y salida de datos.*/
#include<iostream>  
/*Da acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.*/                
using namespace std;                                          
/*Es la función principal que sirve como punto de partida para la ejecución del programa.*/                                 
int main()                                                    
{                                                             
/*Sirve para declarar una variable de tipo decimal.*/                 
  float FMGA_y,s=0,s1=0,s5=0;                           
/*Sirve para declarar una variable de tipo entero.*/                  
  int i=0,FMGA_c,i1=0,i5=0;                                     
  cout<<"Ingrese FMGA_c: ";                                     
  cin>>FMGA_c;                                          
/*Hace que el conjunto de instrucciones se ejecuten al menos una vez.*/                                                             
  do{                                                                   
    cout<<"Ingrese FMGA_y: ";                                     
    cin>>FMGA_y;                                                  
    i=i+1;                                                        
    s=s+FMGA_y;                                   
/*Permite que un programa ejecute unas instrucciones cuando se cumple una condición.*/                                                      
    if(FMGA_y==1){                                                   
      i1=i1+1;                                                      
      s1=s1+FMGA_y;                              
/*Permite que un programa ejecute unas instrucciones cuando no se cumple la condición.*/                                                    
    }else{                                                                                                                       
      i5=i5+1;                                                      
      s5=s5+FMGA_y;
                }
/*Comprueba si cumple cierta condición ejecutándose una y otra vez hasta que deje de cumplirse.*/
           }while(i<FMGA_c);
           cout<<"La cantidad de monedas fue :"<<i<<endl;
           cout<<"El valor fue :"<<s<<endl;

           cout<<"La cantidad de monedas de $1 fue :"<<i1<<endl;
           cout<<"El valor fue :"<<s1<<endl;

           cout<<"La cantidad de monedas de .50 fue :"<<i5<<endl;
           cout<<"El valor fue :"<<s5<<endl;

/*Finaliza la ejecución de una función y devuelve el control a la función de llamada.*/
           return 0;

}
