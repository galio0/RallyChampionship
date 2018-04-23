#ifndef RALLYCHAMPIONSHIP_H
#define RALLYCHAMPIONSHIP_H
#include "Teams.h"
#include "Pilots.h"
#include "Rally.h"
#include<iostream>
#include<cstring>
using namespace std;


class RallyChampionship
{   private:
    int countOfRallies;
    int countOfTeams;
    int countOfPilots;
    int capacity;
    public:
        RallyChampionship();
        ~RallyChampionship();

        void getTeamsTitle() const;// obhojdam rallitata i izvejdam rezultatie
        void getPilotsTitle() const;
        void getFinalResults() const;//точките според позицията

        void print();
    protected:
        Rally** rallies;
        Teams** teams;
        Pilots** pilots;
    private:
        void resize();
};

#endif // RALLYCHAMPIONSHIP_H
