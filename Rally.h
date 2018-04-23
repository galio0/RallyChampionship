#ifndef RALLY_H
#define RALLY_H
#include<iostream>
#include<cstring>
#include"Pilots.h"
using namespace std;


class Rally
{
    public:
        Rally();
        ~Rally();
        Rally(const Rally& other);
        Rally& operator=(const Rally& other);
        Rally(Pilots* position[],const char* rallyname,const char* ground,int easyTurns, int hardTurns, int shortLines, int mediumLines, int longLines);
        Pilots* positioning() const ;
        Pilots* getPosition(int i) const;

        void print();
    protected:
        int easyTurns;//���� ���� �����
        int hardTurns;//���� ����� �����
        int shortLines;//���� ���� �����
        int mediumLines;//���� ������ �����
        int longLines;//���� ����� �����
        char* ground; //��� ��������
        int calculateTurns() const;
        int calculateLines() const;
        char* rallyname;
        Pilots* position[10] ;
       // Pilots* positioning;//s.rand
    private:
};

#endif // RALLY_H
