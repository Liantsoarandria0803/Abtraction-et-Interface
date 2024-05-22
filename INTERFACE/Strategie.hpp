#ifndef STRATEGIE_HPP
#define STRATEGIE_HPP
#include "Jeu.hpp"
#include <string>
class Strategie:public Jeu
{
    private:
         std::string joueur1="";
         int score;
    public:
        Strategie();
        ~Strategie();
        void start();
        void restart();
        void pause();
        void play();
        void quit();
        void choice();
};
#endif