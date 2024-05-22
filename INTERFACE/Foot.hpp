#ifndef FOOT_HPP
#define FOOT_HPP
#include "Jeu.hpp"
#include <string>
class Foot:public Jeu
{
    private:
         std::string Equipe1="";
         std::string Equipe2="";
         int scoreP1;
         int scoreP2;
    public:
        Foot();
        ~Foot();
        void start();
        void restart();
        void pause();
        void play();
        void quit();
        void choice();
};
#endif
