#ifndef WHEEL_H_INCLUDED
#define WHEEL_H_INCLUDED
class Wheel
{   private :
        int direction;
        int psi;
    public :
        Wheel();
        void turn_right(int angle);
        void turn_left(int angle);
        void straighten();
        void fill();
};


Wheel::Wheel()
{   direction=0;
    psi=35;
}

void turn_right(int angle)
{   direction+=angle;
    direction=(direction>90)?90:direction;
}

void turn_left(int angle)
{   direction-=angle;
    direction=(direction<-90)?-90:direction;
}

void straighten()
{
    direction=0;
}

void fill()
{
    psi=35;
}
#endif // WHEEL_H_INCLUDED
