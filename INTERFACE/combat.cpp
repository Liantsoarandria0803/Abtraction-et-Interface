#include "Combat.hpp"
#include <iostream>
#include <cstdlib>
Combat::Combat()
{
}
Combat::~Combat()
{
}
void Combat::start()
{
   std::cout << "Le jeu combat commence :\n Saisissez les combattant de votre choix :\n";
   std:: cin >> combattant1;
   std:: cin >> combattant2;
}
void Combat::restart()
{    
    std::cout << "Restart ...\n";
    Combat::start();
}
void Combat::pause()
{
    std::cout<<"Jeu en Pause\n";
}
void Combat::play()
{   
    std::cout <<"Play ...\n";
}
void Combat::quit()
{
    std::cout <<"Vous êtes en train de quitter le jeu de Combat\n";
    std::cout <<"Score finale :\n";
    srand(time(NULL));
    pointP1=rand()%100;
    pointP2=rand()%100;
    std::cout <<combattant1 <<" : "<<combattant2<<"\n";
    std::cout << pointP1 <<" : " <<pointP2<<std::endl;
    state=0;
}
void Combat::choice()
{
    while(state!=0)
    {
        int choix;
        std::cout <<"JEU DE COMBAT :\n\n";
        std::cout <<"1. Commencer le jeu \n";
        std::cout <<"2. Restart \n";
        std::cout <<"3.Mise en Pause\n";
        std::cout <<"4.Rejouer\n";
        std::cout <<"5.Quit\n";
        std::cin >> choix;
        switch(choix)
        {
            case 1:
                Combat::start();
            break;
            case 2:
                Combat::restart();
            break;
            case 3:
                Combat::pause();
            break;
            case 4:
                Combat::play();
            break;
            case 5:
                Combat::quit();
            break;
        }   
    }
}