//Header de la Clase del Jugador, Se declaran los parametros y sus metodos
#ifndef Player_hpp
#define Player_hpp

    class Player
    {     
    private:    //Ya aprendi a usar los atributos privados
        int AxisX; //Coordenadas
        int AxisY;

    public: 
        void SetAxis();
        void Move(char key);
        void Add(int _x, int _y);

        void SetAxisX(int _x){AxisX=_x;}//Setters
        void SetAxisY(int _y){AxisY=_y;}

        int GetAxisX(){return AxisX;}//Getters
        int GetAxisY(){return AxisY;}

    };  

#endif