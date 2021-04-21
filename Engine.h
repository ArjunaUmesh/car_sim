#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED
int acc=5;
int br=5;
class Engine
{   private :
        int start;
        float velocity;
        float heat;
        int fuel_level;
        int overheat;
    public :
        Engine();
        void start();
        void accelerate();
        void brake();
        int get_velocity();
        void set_velocity(int);
        void increase_heat(float);
};

Engine()
{   start=0;
    speed=0;
    heat=200;
    overheat=0;
}

void Engine::start()
{
    start=1;
    cout<<"Engine started \n";
}

void Engine::accelerate(int intensity)
{
    velocity+=acc*intensity;
}

void Engine::brake(int intensity)
{
    velocity-=br*intensity;
    velocity=(speed<0)?0:speed;
}

int Engine::get_velocity()
{
    return velocity;
}

void Engine::set_velocity(int s)
{   velocity=s;
}

void Engine::increase_heat(float temp)
{   heat+=temp;
    if(heat>240)
    {   overheat=1;

    }
}


#endif // ENGINE_H_INCLUDED
