#ifndef Player_hpp
#define Player_hpp

    class Player
    {
    
    public:
        int AxisX;
        int AxisY;
        
        void SetAxis();
        void CheckBorder();
        void Move(char key);
        void Add(int _x, int _y);
        int GetAxisX(){return AxisX;}
        int GetAxisY(){return AxisY;}

    };  

#endif