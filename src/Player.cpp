#include "Player.hpp"
#include "Matrix.hpp"
#include <iostream>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

Matrix m;
void Player::SetAxis(){
    srand(time(NULL));
    AxisX=rand()%10;
    AxisY=rand()%10;
    CheckBorder();
    Add(AxisX, AxisY);
}

void Player::Move(char key){
    system("cls");
    switch(key){
        
        case 'w':
        CheckBorder();
        AxisX=AxisX-1;
        break;

        case 'a':
        CheckBorder();
        AxisY=AxisY-1;
        break;

        case 's':
        CheckBorder();
        AxisX=AxisX+1;
        break;

        case 'd':
        CheckBorder();
        AxisY=AxisY+1;
        break;

        default:
        break;
    }
    Add(AxisX, AxisY);
}

void Player::CheckBorder(){
    int s=(m.getSize()-1);
    if(AxisX==0){
        AxisX=s;
    }
    if(AxisX==s){
        AxisX=0;
    }
    if(AxisY==0){
        AxisY=s;
    }
    if(AxisY==s){
        AxisY=0;
    }

}
void Player::Add(int AxisX, int AxisY){
    
    
    //SetConsoleTextAttribute(hConsole, 1);
    m.Matriz[AxisX][AxisY]++;
    //SetConsoleTextAttribute(hConsole, 7);

    m.Matriz[AxisX-1][AxisY]++;
    m.Matriz[AxisX+1][AxisY]++;
    m.Matriz[AxisX][AxisY-1]++;
    m.Matriz[AxisX][AxisY+1]++;

    m.Matriz[AxisX-1][AxisY-1]++;
    m.Matriz[AxisX-1][AxisY+1]++;
    m.Matriz[AxisX+1][AxisY-1]++;
    m.Matriz[AxisX+1][AxisY+1]++;
    m.ShowMatrix(AxisX, AxisY);
    
}