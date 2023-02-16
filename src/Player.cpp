//Constructor del jugador
#include "Player.hpp"
#include "Matrix.hpp"
#include <iostream>
#include <time.h> //pa los randoms
#include <windows.h> //pa los colores
#include <stdlib.h>

using namespace std;

Matrix m;
void Player::SetAxis(){ //inicio del juego, se establecen las coordenadas y se agregan.
    srand(time(NULL));
    int x=rand()%10;
    int y=rand()%10;
    CheckBorder(x, y);
    m.ShowMatrix(x, y);
}

void Player::Move(char key){//mover el jugador
    system("cls"); //limpiar la pantalla antes de cualquier cosa

    int x=GetAxisX();
    int y=GetAxisY();
    switch(key){
        
        case 'w':   //Arriba
        if(x<=0){x=9;}else{
            x=(x-1)%10;
        }
        CheckBorder(x, y);

        break;

        case 'a':   //Izquierda
        if(y<=0){y=9;}else{
            y=(y-1)%10;
        }
        CheckBorder(x, y);

        break;

        case 's':   //Abajo
        x=(x+1)%10;
        CheckBorder(x, y);

        break;

        case 'd':   //Derecha
        y=(y+1)%10;
        CheckBorder(x, y);

        break;

        default:
        break;
    }
    m.ShowMatrix(GetAxisX(), GetAxisY());
}

/*BUGGEADO
    cuando se acerca a los negativos el jugador se va del mapa, pero sigue pudiendose mover, y cuando se va
    a los positivos si regresa por el otro lado pero en la pocision 1, no desde el 0, no se porque esta ocurriendo esto
    de momento tengo estas cosas en mente : 
    >No se están actualizando los valores correctos, revisar los valores de entrada y de salida
    >con lo anterior, cambiar el tipo de funcion de void a Int, y retornar el Axis nuevo.
    >jugar con los valores del s y del 0 (valores de los limites)
*/
void Player::CheckBorder(int _x, int _y){//Checar la pocision para corregirla y dar la ilusion de matriz circular
    
    int x=_x;
    int y=_y;

    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            x=(_x+i)%10;
            y=(_y+j)%10;
            if(m.Matriz[x][y]>=9){
                m.Matriz[x][y]=0;
            }else{
                m.Matriz[x][y]++;
            }
        }
    }
    SetAxisX(_x);
    SetAxisY(_y);
}
/*BUGGEADO
    Cuando se acerca a un borde no se traslada por el otro lado, sigue el orden de la matriz, ademas olvidé 
    el requerimiento de que no tiene que pasar de 9, haciendo que la matriz se desacomode.
    ideas para arreglarlo : 
    >Revisar los valores de entrada y de salida
    >hacer un check para no superar el 9
    >aplicar la funcion de CheckBorder tambien a la cruz y a las esquinas
    >Combinar la funcion de Add y ChechBorder ?? 
*/

void Player::Add(int _x, int _y){//Sumas de los valores del jugador y alrededores
    //Suma de la pocision del jugador
    
   
}