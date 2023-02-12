#ifndef Matrix_hpp
#define Matrix_hpp

    class Matrix{

        public :
        int Size=10;
        int Matriz[10][10];
        void StartMatrix();
        void ShowMatrix(int _x, int _y);
        int getSize() const {return Size;}
    };

#endif