#include <iostream>
#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::honkHorn()
{
    setSpeed(60);
    std::cout << name << ": is honking the horn!" << std::endl;
}

void SemiTruck::pullover()
{
    setSpeed(0);
    std::cout << name << ": pulled over quickly when signalled to by the cops" << std::endl;
}
