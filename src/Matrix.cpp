//Clase de la Matriz
#include "Matrix.hpp"
#include "Player.hpp"
#include <iostream>
#include <windows.h>//con esta libreria hago lo de los colores


using namespace std;


Player p;
void Matrix::StartMatrix(){ //llenar una matriz de toda la vida
    int x=getSize();
    for(int row=0;row<x;row++){
            for(int col=0;col<x;col++){
                Matriz[row][col]=0;
            }  
        }
}

void Matrix::ShowMatrix(int _x, int _y){ //Imprimir la matriz en la consola, _x y _y son las coordenadas

    //Estas dos lineas son para los colorines, no se como funcionan but it works
    HANDLE hConsole;
    hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    //
    int x=getSize();
    
    for(int row=0;row<x;row++){
            for(int col=0;col<x;col++){

                //Si la pocision actual de la matriz es exactamente igual a las coordenadas, se colorea
                if(row==_x&&col==_y){ 
                    SetConsoleTextAttribute(hConsole, 1); //Establece el color azul
                    cout<<" "<<Matriz[row][col]<<" ";
                    SetConsoleTextAttribute(hConsole, 7); //Vuelve al color blanco

                }else{
                    cout<<" "<<Matriz[row][col]<<" ";
                }
            }
        cout<<endl;
        }
}