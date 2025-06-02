#include <iostream>
#include "Animal.h"
#include "Zoo.h"

int main()
{
	// 필수 기능
	std::cout << "필수 기능 테스트" << std::endl;
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

	// 도전 기능
	std::cout << "==========" << std::endl;
	std::cout << "도전 기능 테스트" << std::endl;
	Zoo* myZoo = new Zoo();
	for (int n = 0; n < 15; n++)
	{
		myZoo->addAnimal(createRandomAnimal());
	}
	myZoo->performActions();

	delete myZoo;
	return 0;
}