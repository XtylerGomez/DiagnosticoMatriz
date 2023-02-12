//Header de la Clase Matriz, aqui se iniciaran los parametros y metodos

#ifndef Matrix_hpp //Esto es para no compilar a cada rato el header si no hace falta
#define Matrix_hpp

    class Matrix{

        public : //Todo en publico en lo que me vuelvo a acostumbrar a manejar con Private 
        int Size=10; 
        int Matriz[10][10];
        void StartMatrix();
        void ShowMatrix(int _x, int _y);
        int getSize() const {return Size;} //const == Constante sisisis
    };

#endif