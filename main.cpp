#include <chrono>
#include <ctime>
#include <iostream>
#include<fstream>
#include<time.h>
using namespace std;
#include "Car.h"

int main()
{
    time_t t=time(NULL);
    fstream file1("D:\\PSG\\SEMESTER_2\\ObjectOrientedProgramming\\static_cast\\logging.txt",ios::app);
    auto givemetime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    file1<<"User Logged in \t\tTime : "<<ctime(&givemetime);
    int choice;
    int in_g;
    float _intensity;
    Engine e;
    Steeringwheel w;
    Gear g;
    vector <Wheel> ws;
    Car c(e,g,w,ws,"m","c","m",2000);
    cout<<"Are you ready to start \n";

    while(1)
    {
        c.start();
        c.carDetails();
        cout<<"\n1.Accelerate\n2.Brake\n3.Turn\n4.Change Gear\n5.Reverse\n6.Stop\n";
        cin>>choice;
        if(choice==5)
        {
            break;
        }
        switch(choice)
        {   case 1:
                cout<<"Enter the intensity (1-5) ";
                cin>>_intensity;
                c.setIntensityA(_intensity);
                c.accelerate();
                break;
            case 4:
                cout<<"Enter 1.Shift Up and 2.Shift Down : \n";
                cin>>in_g;
                if(in_g==1)
                {
                    c.increase_gear();
                }
                else
                {   c.decrease_gear();
                }
        }

    }
    file1.close();
    cout<<"Ended\n";
    return 0;
}
