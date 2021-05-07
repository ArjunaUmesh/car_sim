#ifndef GEARS_H_INCLUDED
#define GEARS_H_INCLUDED
class Gear
{   private :
        int present_gear;
    public :
        Gear();
        void shiftup();
        void shiftdown();
        void Reverse();
        int max_velocity();
        int get_gear();
        void set_gear(int);
};

Gear::Gear()
{
     present_gear=1;
}

void Gear::shiftup()
{   present_gear++;
    if(present_gear>6)
    {   present_gear=6;
    }
}

void Gear::shiftdown()
{   present_gear--;
    if(present_gear<0)
    {   present_gear=0;
    }
}

int Gear::max_velocity()
{
    switch(present_gear)
    {   case 0:
            return 0;
        case 1 :
            return 25;
        case 2 :
            return 40;
        case 3 :
            return 60;
        case 4 :
            return 80;
        case 5 :
            return 100;
        case 6 :
            return 120;

    }
}

void Gear::Reverse()
{
    present_gear=-1;
}

int Gear::get_gear()
{
    return present_gear;
}

void Gear::set_gear(int gear)
{
    present_gear=gear;

}
#endif // GEARS_H_INCLUDED
