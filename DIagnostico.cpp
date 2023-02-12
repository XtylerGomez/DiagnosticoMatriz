#include <iostream>
#include <time.h>
#define MatrixSize 10 
//tamaño de la matriz como constante, para no
//cambiar todo el codigo constantemente.

using namespace std;

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
      cout<<""<<endl;
    }
}

int main(){
//Generador de numeros random para las coordenadas
srand(time(NULL));
int rndm = rand() % 30;

IniciarMatriz();
ShowMatrix();

  cout<<rndm<<endl;
}