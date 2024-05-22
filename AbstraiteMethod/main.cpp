#include "Vehicule.hpp"
#include "Auto.hpp"
#include "Moto.hpp"
int main()
{
	/*Vehicule Golf= Auto();  error :cannot allocate an object of abstract type ‘Vehicule’*/
	/*Auto Mazda = Vehicule();  error :invalid cast to abstract class type ‘Vehicule’*/  
	Auto Mercedes = Auto();
	Moto Kia=Moto();
	Mercedes.conduire();
	Kia.conduire();
	return 0;
}

