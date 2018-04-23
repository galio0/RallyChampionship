#include "Rally.h"
#include<iostream>
#include<cstring>
using namespace std;

Rally::Rally()
{
    this->rallyname = NULL;
    this->ground = NULL;
    this->easyTurns = 0;
    this->hardTurns = 0;
    this->shortLines = 0;
    this->mediumLines = 0;
    this->longLines = 0;

}

Rally::~Rally()
{
    delete[] rallyname;
    delete[] ground;
}

Rally::Rally(const Rally& other)
{
    this->rallyname = new char[strlen(other.rallyname)+1];
    strcpy(this->rallyname, other.rallyname);
    this->ground = new char[strlen(other.ground)+1];
    strcpy(this->ground, other.ground);
    this->easyTurns = easyTurns;
    this->hardTurns = hardTurns;
    this->shortLines = shortLines;
    this->mediumLines = mediumLines;
    this->longLines = longLines;
    for(int i=0; i<10; i++)
    {
        this->position[i] = other.position[i];
    }
}

Rally& Rally::operator=(const Rally& other)
{
    if (this != &other)
    {
        delete[] rallyname;
        delete[] ground;
        this->rallyname = new char[strlen(other.rallyname)+1];
        strcpy(this->rallyname, other.rallyname);
        this->ground = new char[strlen(other.ground)+1];
        strcpy(this->ground, other.ground);
        this->easyTurns = easyTurns;
        this->hardTurns = hardTurns;
        this->shortLines = shortLines;
        this->mediumLines = mediumLines;
        this->longLines = longLines;
         for(int i=0; i<10; i++)
    {
        this->position[i] = other.position[i];
    }
    }
    return *this;
}

Rally::Rally(Pilots* position[],const char* rallyname,const char* ground,int easyTurns, int hardTurns, int shortLines, int mediumLines, int longLines)
{
        this->rallyname = new char[strlen(rallyname)+1];
        strcpy(this->rallyname, rallyname);
        this->ground = new char[strlen(ground)+1];
        strcpy(this->ground, ground);
        this->easyTurns = easyTurns;
        this->hardTurns = hardTurns;
        this->shortLines = shortLines;
        this->mediumLines = mediumLines;
        this->longLines = longLines;
         for(int i=0; i<10; i++)
    {
        this->position[i] = position[i];
    }
}

void Rally::print()
{
    cout<<"Rally: "<<rallyname<<endl;
    cout<<"TypeofGround: "<<ground<<endl;
    cout<<"NumberofEasyTurns: "<<easyTurns<<endl;
    cout<<"NumberofHardTurns: "<<hardTurns<<endl;
    cout<<"NumberofShortLines: "<<shortLines<<endl;
    cout<<"NumberofMediumLines: "<<mediumLines<<endl;
    cout<<"NumberofLongLines: "<<longLines<<endl;
}

int Rally::calculateLines() const
{
    int count=0;
    count = shortLines+mediumLines+longLines;
    return count;
}

int Rally::calculateTurns() const
{
    return easyTurns+hardTurns;
}

Pilots* Rally:: getPosition(int i) const
        {
            return position[i];
        }
