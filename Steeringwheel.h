#ifndef STEERINGWHEEL_H_INCLUDED
#define STEERINGWHEEL_H_INCLUDED
class Steeringwheel
{   private :
        float rotation;
        int time;
    public :
        Steeringwheel();
        rotate(float);
        rotate_for(int);
};

Steeringwheel::Steeringwheel()
{   rotation=0;
    time=0;
}

Steeringwheel::rotate(float angle)
{   rotation+=angle;
    if(rotation>90)
    {   rotation=90;
    }else if(rotation<-90)
    {   rotation=-90;
    }
}

Steeringwheel::rotate_for(int t)
{   time=t;
}


#endif // STEERINGWHEEL_H_INCLUDED
