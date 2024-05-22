#include "Foot.hpp"
#include <iostream>
#include <cstdlib>
Foot::Foot()
{
}
Foot::~Foot()
{
}
void Foot::start()
{
   std:: cout << "Le jeu foot commence :\n Saisissez l'equipe de votre choix :\n";
   std:: cin >> Equipe1;
   std:: cin >> Equipe2;
}
void Foot::restart()
{    
    std::cout << "Restart ...\n";
    Foot::start();
}
void Foot::pause()
{
    std::cout<<"Jeu en Pause\n";
}
void Foot::play()
{   
    std::cout <<"Play ...\n";
}
void Foot::quit()
{
    std::cout <<"Vous êtes en train de quitter le jeu foot\n";
    std::cout <<"Score finale :\n";
    srand(time(NULL));
    scoreP1=rand()%12;
    scoreP2=rand()%12;
    std::cout << Equipe1 <<" : "<<Equipe2<<"\n";
    std::cout << scoreP1 <<" : " <<scoreP2<<"\n";
    state=0;
}
void Foot::choice()
{
    state=1;
    while(state!=0)
    {
        int choix;
        std::cout <<"JEU DE FOOT :\n\n";
        std::cout <<"1. Commencer le jeu \n";
        std::cout <<"2. Restart \n";
        std::cout <<"3.Mise en Pause\n";
        std::cout <<"4.Rejouer\n";
        std::cout <<"5.Quit\n";
        std::cin >> choix;
        switch(choix)
        {
            case 1:
                Foot::start();
            break;
            case 2:
                Foot::restart();
            break;
            case 3:
                Foot::pause();
            break;
            case 4:
                Foot::play();
            break;
            case 5:
                Foot::quit();
            break;
        }   
    }
}