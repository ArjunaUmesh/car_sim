#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED
float acc=240.0;
float br=360.0;
class Engine
{   private :

        float velocity;
        float heat;
        int fuel_level;
        int overheat;
    public :
        Engine();
        void start();
        void accelerate(float);
        void brake(float);
        int get_velocity();
        void set_velocity(int);
        void increase_heat(float);
};

Engine::Engine()
{

    velocity=0;
    heat=200;
    overheat=0;

}

void Engine::start()
{

    cout<<"Engine started \n";
}

void Engine::accelerate(float intensity)
{
    velocity+=(acc*intensity)/60;
    cout<<"Increased\n";
}

void Engine::brake(float intensity)
{
    velocity-=br*intensity;
    velocity=(velocity<0)?0:velocity;
}

int Engine::get_velocity()
{
    return velocity;
}

void Engine::set_velocity(int s)
{
    velocity=s;
}

void Engine::increase_heat(float temp)
{   heat+=temp;
    if(heat>240)
    {   overheat=1;

    }
}


#endif // ENGINE_H_INCLUDED
