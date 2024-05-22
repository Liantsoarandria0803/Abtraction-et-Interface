#ifndef MOTO_HPP
#define MOTO_HPP
#include "Vehicule.hpp"
class Moto:public Vehicule
{
	private:
		int marque;
	public:
		Moto();
		~Moto();
		void conduire() ;
};
#endif