#include <iostream>
#include "Animal.h"

int main()
{
	Animal* animals[3];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow;

	for (auto& animal : animals)
	{
		animal->makeSound();
	}

	for (auto& animal : animals)
	{
		delete animal;
	}
	return 0;
}