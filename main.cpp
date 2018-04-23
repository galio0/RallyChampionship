#include "Pilots.h"
#include "Teams.h"
#include "Rally.h"
#include "RallyChampionship.h"
#include<iostream>
#include<cstring>

using namespace std;

enum  pilots{zero, first, second , third, fourth, fifth, sixth, seventh, eighth};

int main()
{
    cout<<pilots(fifth)<<endl;

  Teams Citroen("Citroen", "Citroen DS 3");
    Citroen.print();
    cout<<endl;
    Teams MSport("M-Sport", "Ford Fiesta WRC");
    MSport.print();
    cout<<endl;
    Teams Hyundai("Hyundai", "Hyundai i20 Coupe WRC");
    Hyundai.print();
    cout<<endl;
    Teams Toyota("Toyota", "Toyota Yaris WRC");
    Toyota.print();
    cout<<endl;

    cout<<endl;
    Pilots racer1("Citroen", "Citroen DS 3","Kris Meeke", 100);
    racer1.print();
    Pilots racer2("Citroen", "Citroen DS 3","Craig Breen", 90);
    Pilots racer3("M-Sport", "Ford Fiesta WRC", "Sebastien Ogier", 100);
    Pilots racer4("M-Sport", "Ford Fiesta WRC", "Ott Tanak", 90);
    Pilots racer5("Hyundai", "Hyundai i20 Coupe WRC", "Dani Sordo", 100);
    Pilots racer6("Hyundai", "Hyundai i20 Coupe WRC", " Thierry Neuville", 100);
    Pilots racer7("Toyota", "Toyota Yaris WRC", "Jari-Matti Latvala", 100);
    Pilots racer8("Toyota", "Toyota Yaris WRC", "Juho Hanninen", 88);
    Pilots racer9("Skoda Motorsport", "Skoda Fabia R5", "Jan Kopecky", 100);
    Pilots racer10("Skoda MotorSport", "Skoda Fabia R5", "Pontus Tideman", 88);
    racer2.print();
    cout<<endl;
        racer3.print();
    cout<<endl;
        racer4.print();
    cout<<endl;
        racer5.print();
    cout<<endl;
        racer6.print();
    cout<<endl;
        racer7.print();
    cout<<endl;
        racer8.print();
    cout<<endl;
    Pilots* pilots[] = {&racer1, &racer2, &racer3, &racer4, &racer5, &racer6, &racer7, &racer8, &racer9, &racer10};
  Rally MonteCarlo( pilots,"Monte Carlo", "ice",150, 200,50, 40, 50);
    MonteCarlo.print();
    cout<<endl;
   Rally Sweden(pilots,"Sweeden" ,"snow", 200, 150, 89, 58, 48);
   Rally Sardinia(pilots, "Sardinia", "makadam", 154, 124, 98,85,65);
    Sweden.print();
    cout<<endl;
    Sardinia.print();
    cout<<endl;
    for(int i=0; i<10; i++)
    {
        pilots[i]->print();
        cout<<endl;
    }

    cout<<endl;
    Rally* rallies[]={&MonteCarlo, &Sweden, &Sardinia};
        for(int i=0; i<3; i++)
    {
        rallies[i]->print();
        cout<<endl;
    }

    cout<<endl;

    Teams* teams[] = {&Citroen, &Hyundai, &MSport, &Toyota};
        for(int i=0; i<4; i++)
    {
        teams[i]->print();
        cout<<endl;
    }




    return 0;
}
