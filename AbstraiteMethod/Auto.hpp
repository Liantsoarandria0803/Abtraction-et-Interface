#ifndef AUTO_HPP
#define AUTO_HPP
#include "Vehicule.hpp"
class Auto:public Vehicule
{
	private:
		int marque;
	public:
		Auto();
		~Auto();
		void conduire();
};
#endif
