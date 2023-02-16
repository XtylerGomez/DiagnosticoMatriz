#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <conio.h> //para el getch()
#include "src/Matrix.hpp"
#include "src/Player.hpp"

using namespace std;

int main(){

    //Objetos de la matriz y la player
    Matrix m;
    Player p;

    char wasd;  //Chequear lo ingresado
    system("cls");
    m.StartMatrix(); //Iniciar Matriz
    p.SetAxis();    //Iniciar Juego


    while(wasd!='p'){ //P va a ser la salida del programa

        wasd=getch(); //caracter ingresado
        p.Move(wasd); //Funcion de moverse

    }
}