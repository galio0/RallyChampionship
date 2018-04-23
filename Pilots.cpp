#include "Pilots.h"
#include "Teams.h"
#include<iostream>
#include<cstring>
using namespace std;

Pilots::Pilots():Teams()
{
    this->pilotname = NULL;
    this->quality = 0;
}

Pilots::~Pilots()
{
    delete[] pilotname;
}

Pilots::Pilots(const Pilots& other):Teams(other)
{
    this->pilotname = new char[strlen(other.pilotname)+1];
    strcpy(this->pilotname, other.pilotname);
    this->quality = quality;
}

Pilots& Pilots::operator=(const Pilots& other)
{
    Teams::operator=(other);
    if (this != &other)
    {
        delete[] pilotname;
    this->pilotname = new char[strlen(other.pilotname)+1];
    strcpy(this->pilotname, other.pilotname);
    this->quality = quality;
    }
    return *this;
}

Pilots::Pilots(const char* name, const char* brandCar, const char* pilotname, int quality): Teams(name, brandCar)
{
    this->pilotname = new char[strlen(pilotname)+1];
    strcpy(this->pilotname, pilotname);
    this->quality = quality;
}

const char* Pilots::getPilotName() const
{
    return pilotname;
}

int Pilots::getQuality() const
{
    return quality;
}

void Pilots::setPilotName(const char* newName)
{
    strcpy(this->pilotname, newName);
}

void Pilots::setQuality(int newQuality)
{
    this->quality = newQuality;
}

void Pilots::print()
{
    Teams::print();
    cout<<"Pilot: "<<pilotname<<endl;
    cout<<"Quality: "<<quality<<endl;
}
