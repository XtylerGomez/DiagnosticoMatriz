//Header de la Clase Matriz, aqui se iniciaran los parametros y metodos

#ifndef Matrix_hpp //Esto es para no compilar a cada rato el header si no hace falta
#define Matrix_hpp

    class Matrix{

        public : //No hizo falta hacer cosos privados aqui
        int Size=10; 
        int Matriz[10][10];
        void StartMatrix();
        void ShowMatrix(int _x, int _y);
        int getSize() const {return Size;} //const == Constante, logic
    };

#endif