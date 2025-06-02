#include <iostream>
#include "Animal.h"
#include "Zoo.h"

int main()
{
	// �ʼ� ���
	std::cout << "�ʼ� ��� �׽�Ʈ" << std::endl;
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

	// ���� ���
	std::cout << "==========" << std::endl;
	std::cout << "���� ��� �׽�Ʈ" << std::endl;
	Zoo* myZoo = new Zoo();
	for (int n = 0; n < 15; n++)
	{
		myZoo->addAnimal(createRandomAnimal());
	}
	myZoo->performActions();

	delete myZoo;
	return 0;
}