#include "Matrix.hpp"
#include "Player.hpp"
#include <iostream>
#include <windows.h>


using namespace std;


Player p;
void Matrix::StartMatrix(){
    int x=getSize();
    for(int row=0;row<x;row++){
            for(int col=0;col<x;col++){
                Matriz[row][col]=0;
            }  
        }
}

void Matrix::ShowMatrix(int _x, int _y){
    HANDLE hConsole;
    hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    int x=getSize();
    
    for(int row=0;row<x;row++){
            for(int col=0;col<x;col++){

                if(row==_x&&col==_y){
                    SetConsoleTextAttribute(hConsole, 1);
                    cout<<" "<<Matriz[row][col]<<" ";
                    SetConsoleTextAttribute(hConsole, 7);

                }else{
                    cout<<" "<<Matriz[row][col]<<" ";
                }
            }
        cout<<endl;
        }
}