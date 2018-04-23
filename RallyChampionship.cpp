#include "RallyChampionship.h"
#include "Teams.h"
#include "Pilots.h"
#include "Rally.h"
#include<iostream>
#include<cstring>
using namespace std;

RallyChampionship::RallyChampionship()
{
    this->countOfPilots = 0;
    this->countOfRallies = 0;
    this->countOfTeams = 0;
    this->capacity = 10;
    this->rallies = new Rally*[capacity];
    this->pilots = new Pilots*[capacity];
    this->teams = new Teams*[capacity];
}

RallyChampionship::~RallyChampionship()
{
    delete[] rallies;
    delete[] teams;
    delete[] pilots;
}

void RallyChampionship::print()
{
    for(int a = 0; a<countOfPilots; a++)
    {
        pilots[a]->print();
    }
    cout<<endl;
    for(int b = 0; b<countOfRallies; b++)
    {
        rallies[b]->print();
    }
    cout<<endl;
    for(int c = 0; c<countOfTeams; c++)
    {
        teams[c]->print();
    }
}

void RallyChampionship :: getFinalResults() const
{ int positionpoints[] = {20,15,10,8,6,5,4,3,2,1};
    for(int j=0; j<2; j++)
     {
        for(int i=0; i<10; i++)
            {
                rallies[j]->getPosition(i)->print();
                cout<<positionpoints[i]<<endl;
            }
     }
}

void RallyChampionship :: getPilotsTitle() const
{   int winner=0;
    int positionpoints[] = {20,15,10,8,6,5,4,3,2,1};
    for(int j=0; j<3; j++)
     {
        for(int i=0; i<10; i++)
            {
                rallies[j]->getPosition(i)->print();
                cout<<positionpoints[i]<<endl;
            }
     }
}

void RallyChampionship :: getTeamsTitle() const
{
    int positionpoints[] = {20,15,10,8,6,5,4,3,2,1};
}
