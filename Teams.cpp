#include "Teams.h"
#include<iostream>
#include<cstring>
using namespace std;
Teams::Teams()
{
    this->name = NULL;
    this->brandCar = NULL;
}

Teams::~Teams()
{
    delete[] name;
    delete[] brandCar;
}

Teams::Teams(const Teams& other)
{
    this->name = new char[strlen(other.name)+1];
    strcpy(this->name, other.name);
    this->brandCar = new char[strlen(other.brandCar)+1];
    strcpy(this->brandCar, other.brandCar);
}

Teams& Teams::operator=(const Teams& other)
{
    if (this != &other)
    {
    this->name = new char[strlen(other.name)+1];
    strcpy(this->name, other.name);
    this->brandCar = new char[strlen(other.brandCar)+1];
    strcpy(this->brandCar, other.brandCar);
    }
    return *this;
}

Teams::Teams(const char* name, const char* brandCar)
{
    this->name = new char[strlen(name)+1];
    strcpy(this->name, name);
    this->brandCar = new char[strlen(brandCar)+1];
    strcpy(this->brandCar, brandCar);
}

const char* Teams::getName() const
{
    return name;
}

const char* Teams::getBrandCar() const
{
    return brandCar;
}

void Teams::setName(const char* newName)
{
    strcpy(this->name, newName);
}

void Teams::setBrandCar(const char* newBrandCar)
{
    strcpy(this->brandCar, newBrandCar);
}

void Teams::print()
{
    cout<<"Team: "<<name<<endl;
    cout<<"BrandCar: "<<brandCar<<endl;
}
