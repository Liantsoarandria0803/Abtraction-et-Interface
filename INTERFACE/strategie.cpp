#include "Strategie.hpp"
#include <iostream>
#include <cstdlib>
Strategie::Strategie()
{
}
Strategie::~Strategie()
{
}
void Strategie::start()
{
   std::cout << "Le jeu de strategie commence :\n Saisir le nom de votre avatar :\n";
   std::cin >> joueur1;
}
void Strategie::restart()
{    
    std::cout << "Restart ...\n";
    Strategie::start();
}
void Strategie::pause()
{
    std::cout<<"Jeu en Pause\n";
}
void Strategie::play()
{   
    std::cout <<"Play ...\n";
}
void Strategie::quit()
{
    std::cout <<"Vous êtes en train de quitter le jeu de strategie\n";
    std::cout <<"Score Finale :\n";
     score=rand()%100;
     std::cout << joueur1 <<"\n";
     std::cout <<score;
    state=0;
}
void Strategie::choice()
{
    state=1;
    while(state!=0)
    {
        int choix;
        std::cout <<"1. Commencer le jeu \n";
        std::cout <<"2. Restart \n";
        std::cout <<"3.Mise en Pause\n";
        std::cout <<"4.Rejouer\n";
        std::cout <<"5.Quit\n";
        std::cin >> choix;
        switch(choix)
        {
            case 1:
                Strategie::start();
            break;
            case 2:
                Strategie::restart();
            break;
            case 3:
                Strategie::pause();
            break;
            case 4:
                Strategie::play();
            break;
            case 5:
                Strategie::quit();
            break;
        }   
    }
}