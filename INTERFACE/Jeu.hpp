#ifndef JEU_HPP
#define JEU_HPP
class Jeu
{
    public :
        Jeu();
        ~Jeu();
        virtual void start()=0;
        virtual void restart()=0;
        virtual void pause()=0;
        virtual void play()=0;
        virtual void quit()=0;
        virtual void choice()=0;
    protected:
         int state;
};
#endif