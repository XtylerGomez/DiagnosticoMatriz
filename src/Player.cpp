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
    AxisX=rand()%10;
    AxisY=rand()%10;
    CheckBorder();
    Add(AxisX, AxisY);
}

void Player::Move(char key){//mover el jugador
    system("cls"); //como es consola ps tiene que estar limpia esta verdad ?
    switch(key){
        
        case 'w':   //Arriba
        CheckBorder();
        AxisX=AxisX-1;
        Add(AxisX, AxisY);
        break;

        case 'a':   //Izquierda
        CheckBorder();
        AxisY=AxisY-1;
        Add(AxisX, AxisY);
        break;

        case 's':   //Abajo
        CheckBorder();
        AxisX=AxisX+1;
        Add(AxisX, AxisY);
        break;

        case 'd':   //Derecha
        CheckBorder();
        AxisY=AxisY+1;
        Add(AxisX, AxisY);
        break;

        default:
        break;
    }
    
}

/*BUGGEADO
    cuando se acerca a los negativos el jugador se va del mapa, pero sigue pudiendose mover, y cuando se va
    a los positivos si regresa por el otro lado pero en la pocision 1, no desde el 0, no se porque esta ocurriendo esto
    de momento tengo estas cosas en mente : 
    >No se están actualizando los valores correctos, revisar los valores de entrada y de salida
    >con lo anterior, cambiar el tipo de funcion de void a Int, y retornar el Axis nuevo.
    >jugar con los valores del s y del 0 (valores de los limites)
*/
void Player::CheckBorder(){//Checar la pocision para corregirla y dar la ilusion de matriz circular

    int s=(m.getSize()-1);
    
    if(AxisX==0){ //Limite Arriba
        AxisX=s;
    }
    if(AxisX==s){ //Limite Abajo
        AxisX=0;
    }
    if(AxisY==0){ //Limite Izquierda
        AxisY=s;
    }
    if(AxisY==s){ //Limite Derecha
        AxisY=0;
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
}
void Player::Add(int AxisX, int AxisY){//Sumas de los valores del jugador y alrededores
    //Suma de la pocision del jugador
    m.Matriz[AxisX][AxisY]++;

    //la Cruz
    m.Matriz[AxisX-1][AxisY]++;
    m.Matriz[AxisX+1][AxisY]++;
    m.Matriz[AxisX][AxisY-1]++;
    m.Matriz[AxisX][AxisY+1]++;

    //las Esquinas
    m.Matriz[AxisX-1][AxisY-1]++;
    m.Matriz[AxisX-1][AxisY+1]++;
    m.Matriz[AxisX+1][AxisY-1]++;
    m.Matriz[AxisX+1][AxisY+1]++;

    //reiniciar el show de la matriz
    m.ShowMatrix(AxisX, AxisY);
    
}