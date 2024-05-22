#include "Jeu.hpp"
#include "Foot.hpp"
#include "Strategie.hpp"
#include "Combat.hpp"
#include <iostream>
int main()
{
    Foot pes=Foot();
    Strategie monopoly =Strategie();
    Combat tekken=Combat();
    int choix;
        std::cout << "Les jeux dans notre stock \n";
        std::cout <<" 1.Pes\n";
        std::cout <<" 2.Monopoly\n";
         std::cout <<" 3.Tekken\n";
        std::cin >> choix;
        switch (choix)
        {
        case 1:
            pes.choice();
            break;
        case 2:
            monopoly.choice();
            break;
        case 3:
            tekken.choice();
            break;
        default:
            std::cout<<"Error\n";
            break;
        }
    return 0;
}