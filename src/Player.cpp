//Constructor del jugador
#include "Player.hpp"
#include "Matrix.hpp"
#include <iostream>
#include <time.h> //para los randoms
#include <stdlib.h>

using namespace std;

Matrix m;
void Player::SetAxis(){ //inicio del juego, se establecen las coordenadas y se agregan.
    srand(time(NULL));
    int x=rand()%10;
    int y=rand()%10;
    Add(x, y);  //Como dentro del Add estan los Setters de las coordenadas no hizo falta hacerlas aqui
    m.ShowMatrix(x, y); 
}

void Player::Move(char key){//mover el jugador
    system("cls"); //limpiar la pantalla antes de cualquier cosa

    int x=GetAxisX();   //para no usar los valores en si, mejor guardarlos en una
    int y=GetAxisY();   //variable local y asi no tener problemas
    switch(key){
        
        case 'w':   //Arriba
        if(x<=0){x=9;}else{ //Check del borde Norte (desbordamiento negativo)
            x=(x-1); //Check const
        }
        Add(x, y);

        break;

        case 'a':   //Izquierda
        if(y<=0){y=9;}else{ //Check del Borde Oeste (desbordamiento negativo)
            y=(y-1);
        }
        Add(x, y);

        break;

        case 's':   //Abajo
        x=(x+1)%10; //Check del Borde Sur (desbordamiento positivo)
        Add(x, y);

        break;

        case 'd':   //Derecha
        y=(y+1)%10; //Check del Borde Este (desbordamiento positivo)
        Add(x, y);

        break;

        default:
        break;
    }
    m.ShowMatrix(GetAxisX(), GetAxisY()); //Una vez hecho el movimiento y el add, se vuelve a mostrar la matriz
}


void Player::Add(int _x, int _y){//Checar las Pocisiones aledañas y sumarlas.
    int x=_x; //Variables Locales
    int y=_y;

    for(int i=-1;i<=1;i++){     //Ciclos para simplificar el checkeo y la suma de las pocisiones aledañas,
        for(int j=-1;j<=1;j++){ //siempre son, de la pocision actual, cambios en 1 a cualquier direccion.
            
            x=(_x+i)%10;    //Se hacen los mismos checks de desbordamiento positivo y negativo de las
            y=(_y+j)%10;    //Pocisiones de alrededor

            if(x<0){x=9;}
            if(y<0){y=9;}

            if(m.Matriz[x][y]>=9){ //Comprobacion para Evitar que se muestren numeros de mas de una cifra
                m.Matriz[x][y]=0;
            }else{
                m.Matriz[x][y]++;
            }
        }
    }
    SetAxisX(_x); //Finalmente se actualizan las coordenadas en base al valor recibido.
    SetAxisY(_y);
}