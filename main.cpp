#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "src/Matrix.hpp"
#include "src/Player.hpp"
#define MatrixSize 10 

using namespace std;
//Funciones que hacen falta : 
//Iniciar Jugador
//Sumar
//Movimiento


int main(){

Matrix m;
Player p;
char wasd;
m.StartMatrix();
p.SetAxis();
while(wasd!='p'){
    cin>>wasd;
    p.Move(wasd);
}
}