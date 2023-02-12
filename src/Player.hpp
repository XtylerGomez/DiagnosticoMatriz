//Header de la Clase del Jugador, Se declaran los parametros y sus metodos
#ifndef Player_hpp
#define Player_hpp

    class Player
    {
    
    public: 
        int AxisX; //Coordenadas
        int AxisY;
        
        void SetAxis();
        void CheckBorder();
        void Move(char key);
        void Add(int _x, int _y);
        int GetAxisX(){return AxisX;}//Getters. Tengo entendido que esto deberia hacerlo cuando los
        int GetAxisY(){return AxisY;}//parametros sean Privados, pero los voy aplicando de una

    };  

#endif