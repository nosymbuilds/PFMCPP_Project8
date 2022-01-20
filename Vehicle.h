#pragma once
#include <string>

struct HighwayPatrol;

struct Vehicle
{
    Vehicle(const std::string& n);
    
    //Special member Functions.  See instruction 9) and note in main()
    virtual ~Vehicle();
    Vehicle(const Vehicle&);
    Vehicle& operator=(const Vehicle&);

    virtual void setSpeed(int s);
    virtual void tryToEvade();

    friend HighwayPatrol;
    
protected:
    int speed = 0;
    std::string name;
};
