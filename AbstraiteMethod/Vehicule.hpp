#ifndef VEHICULE_HPP
#define VEHICULE_HPP
#include <string>
class Vehicule
{
	private:
		int marque;
	public:
		Vehicule();
		~Vehicule();
		virtual void conduire()= 0;
};
#endif