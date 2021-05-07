#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include<vector>

#include "Engine.h"
#include "Gears.h"
#include "Steeringwheel.h"
#include "Wheel.h"
using namespace std;
class Car
{   private :
        Engine E;
        Gear G;
        Steeringwheel W;
        vector <Wheel> Ws;
        float distance=0;
        float intensityA=0;
        float intensityB=0;
        //Descriptive details :

        string make;
        string model;
        string colour;
        int year;


    public :
        //User interface functions :
        Car();
        Car(Engine,Gear,Steeringwheel,vector <Wheel>,string,string,string,int);
        void start();
        void stop();
        void accelerate();
        void brake();
        void increase_gear();
        void decrease_gear();
        void reverse();
        void turn_left();
        void turn_right();
        void carDetails();
        float getDistance();
        float getIntensityA();
        void setIntensityA(float);
        void setIntensityB(float);
        void setDistance(float);
};

Car::Car()
{
    cout<<"Enter the Make : \n";
    cin>>make;
    cout<<"Enter the Model : \n";
    cin>>model;
    cout<<"Enter the colour :\n";
    cin>>colour;
    cout<<"Enter the year of make :\n";
    cin>>year;
}

Car::Car(Engine E,Gear G,Steeringwheel W,vector <Wheel> Ws,string make,string model,string colour,int year)
{
    this->make=make;
    this->model=model;
    this->colour=colour;
    this->year=year;
    this->E=E;
    this->G=G;
    this->W=W;
    this->Ws=Ws;

}

void Car::start()
{
    E.start();

}

void Car::increase_gear()
{
    if(G.get_gear()==-1)
    {   if(E.get_velocity()>0)
        {   cout<<"Can't shift gear \n";
        }
    }
    G.shiftup();

}

void Car::decrease_gear()
{
    if(G.get_gear()!=1)
    {   G.shiftdown();

        if(E.get_velocity()>G.max_velocity())
        {
            E.set_velocity(G.max_velocity());
        }
        setIntensityA(0);
    }else
        cout<<"Can't shift down from first gear\n";
}

void Car::reverse()
{   if(E.get_velocity()>0)
    {   cout<<"Can't Reverse \n";
    }
    G.set_gear(0);
}

void Car::accelerate()
{
    E.accelerate(intensityA);
    E.increase_heat(0.1);
    if(E.get_velocity()>G.max_velocity())
    {   E.set_velocity(G.max_velocity());
        cout<<"WARNING : HIGH RPM \n";
        E.increase_heat(1);
    }

}

void Car::brake()
{
    E.brake(intensityB);
}

float Car::getDistance()
{
    return distance;
}

float Car::getIntensityA()
{
    return intensityA;
}

void Car::setIntensityA(float i)
{
    intensityA=i;

}
void Car::setIntensityB(float i)
{
    intensityB=i;

}


void Car::setDistance(float d)
{
    distance=d;
}

void Car::carDetails()
{
    cout<<"Velocity : "<<E.get_velocity();
    cout<<" Direction : "<<W.getDirection();
    cout<<" Gear : "<<G.get_gear();
    cout<<" Distance :"<<getDistance();
    cout<<" Acceleration :"<<getIntensityA();

}




#endif // CAR_H_INCLUDED
