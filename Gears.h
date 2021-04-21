#ifndef GEARS_H_INCLUDED
#define GEARS_H_INCLUDED
class Gears
{   private :
        int present_gear;
    public :
        Gears();
        void shiftup();
        void shiftdown();
        void Reverse();
        int max_speed();
        void reverse();
        int get_gear();
        void set_gear(int);
};

Gears::Gears()
{
     present_gear=1;
}

Gears::shiftup()
{   present_gear++;
    if(present_gear>6)
    {   present_gear=6;
    }
}

Gears::shiftdown()
{   present_gear--;
    if(present_gear<0)
    {   present_gear=0;
    }
}

int Gears::max_speed()
{
    switch(present_gear)
    {   case 0:
            return 25;
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

void Gears::Reverse()
{
    present_gear=0;
}

int Gears::get_gear()
{
    return gear;
}

void Gears::set_gear(int gear)
{
    present_gear=gear;

}
#endif // GEARS_H_INCLUDED
