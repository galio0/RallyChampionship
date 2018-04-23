#ifndef PILOTS_H
#define PILOTS_H
#include "Teams.h"
#include<iostream>
#include<cstring>
using namespace std;

class Pilots: public Teams
{
    public:
        Pilots();
        ~Pilots();
        Pilots(const Pilots& other);
        Pilots& operator=(const Pilots& other);
        Pilots(const char* name,const char* brandCar,const char* pilotname, int quality);

        const char* getPilotName() const;
        void setPilotName(const char* newName);
        int getQuality() const;
        void setQuality(int newQuality);

        void print();
    protected:
        char* pilotname;
        int quality;
    private:
};

#endif // PILOTS_H
