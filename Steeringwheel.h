#ifndef STEERINGWHEEL_H_INCLUDED
#define STEERINGWHEEL_H_INCLUDED
class Steeringwheel
{   private :
        float direction;
    public :
        Steeringwheel();
        void rotate(float,int);
        string getDirection();
};

Steeringwheel::Steeringwheel()
{
    direction=0;   //in degrees
}

void Steeringwheel::rotate(float angle,int time)
{
    direction=direction+angle*time;

}

string Steeringwheel::getDirection()
{
    if(direction==0)
    {
        return "Straight";
    }
    else if(direction<0)
    {
        return "Left";

    }else
    {
        return "Right";
    }
}

#endif // STEERINGWHEEL_H_INCLUDED
