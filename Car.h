#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include "Engine.h"
#include "Gears.h"
#include "Steeringwheel.h"
#include "Wheel.h"
class Car
{   private :
        Engine E;
        Gears G;
        Steeringwheel W;
        Wheel Ws[4];
        //Descriptive details :

        string make;
        string model;
        string colour;


    public :
        //User interface functions :
        Car();
        void start();
        void stop();
        void accelerate();
        void brake();
        void increase_gear();
        void decrease_gear();
        void reverse();
        void turn_left();
        void turn_right();

};

Car::Car()
{
    cout<<"Enter the Make , model and colour of the car : \n";
    cin>>make;
    cin>>model;
    cin>>colour;
    E=Engine();
    for(int i=0;i<4;i++)
    {   ws[i]=Wheel();
    }
    G=Gears();
    S=Steeringwheel();
}


void Car::start()
{
    E.start();

}

void Car::increase_gear()
{
    if(G.get_gear()==0)
    {   if(E.get_velocity()>0)
        {   cout<<"Can't shift gear \n";
        }
    }
    G.shiftup();

}

void Car::decrease_gear()
{
    G.shiftdown();
}

void car::reverse()
{   if(E.get_speed()>0)
    {   cout<<"Can't Reverse \n";
    }
    G.set_gear(0);
}

void Car::accelerate()
{
    int intensity;
    cout<<"Enter the intensity : \n";
    cin>>intensity;
    E.accelerate(intensity);
    E.increase_heat(0.1);
    if(E.get_velocity()>G.max_velocity())
    {   E.set_velocity(G.max_velocity);
        cout<<"WARNING : high rpm \n";
        E.increase_heat(1);
    }

}

void Car::brake()
{
    int intensity;
    cout<<"Enter the intensity : \n";
    cin>>intensity;
    E.brake(intensity);
}


#endif // CAR_H_INCLUDED
