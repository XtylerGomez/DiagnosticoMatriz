//Header de la Clase del Jugador, Se declaran los parametros y sus metodos
#ifndef Player_hpp
#define Player_hpp

    class Player
    {
        
    private:
        int AxisX; //Coordenadas
        int AxisY;

    public: 
        
        
        void SetAxis();
        void CheckBorder(int _x, int _y);
        void Move(char key);
        void Add(int _x, int _y);

        void SetAxisX(int _x){AxisX=_x;}
        void SetAxisY(int _y){AxisY=_y;}
        
        int GetAxisX(){return AxisX;}//Getters. Tengo entendido que esto deberia hacerlo cuando los
        int GetAxisY(){return AxisY;}//parametros sean Privados, pero los voy aplicando de una

    };  

#endif