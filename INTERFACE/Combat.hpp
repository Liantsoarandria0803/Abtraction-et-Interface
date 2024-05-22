#ifndef COMBAT_HPP
#define COMBAT_HPP
#include "Jeu.hpp"
#include <string>
class Combat:public Jeu
{
    private:
         std::string combattant1="";
         std::string combattant2="";
         int pointP1;
         int pointP2;
    public:
        Combat();
        ~Combat();
        void start();
        void restart();
        void pause();
        void play();
        void quit();
        void choice();
};
#endif