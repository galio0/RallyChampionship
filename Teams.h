#ifndef TEAMS_H
#define TEAMS_H
#include<iostream>
#include<cstring>
using namespace std;

class Teams
{
    public:
        Teams();
        ~Teams();
        Teams(const Teams& other);
        Teams& operator=(const Teams& other);
        Teams(const char* name, const char* brandCar);

        const char* getName() const;
        void setName(const char* newName);
        const char* getBrandCar() const;
        void setBrandCar(const char* newBrandCar);

        virtual void print();
    protected:
        char* name;
        char* brandCar;
    private:
};

#endif // TEAMS_H
