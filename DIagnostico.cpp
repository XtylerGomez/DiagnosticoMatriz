#include <iostream>
#define MatrixSize 10 
//tamaño de la matriz como constante, para no
//cambiar todo el codigo constantemente.

using namespace std;

//Generador de numeros random para las coordenadas
srand((usingned) time(NULL))
int rand = srand() % 30;

//Declarar Matriz y sus funciones.
int Matrix[MatrixSize][MatrixSize];
void IniciarMatriz(){
    for(int row=0;row<MatrixSize;row++){
        for(int col=0;col<MatrixSize;col++){
            Matrix[row][col]=0;
        }  
    }
}
void ShowMatrix(){
    for(int row=0;row<MatrixSize;row++){
        for(int col=0;col<MatrixSize;col++){
            cout<<" "<<Matrix[row][col]<<" ";
        }
      cout<<endl;
    }
}

int main(){

IniciarMatriz();
ShowMatrix();

}