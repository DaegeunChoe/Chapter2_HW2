#include <iostream>
#include "Animal.h"

void Dog::makeSound()
{
	std::cout << "�۸�!" << std::endl;
}

void Cat::makeSound()
{
	std::cout << "�߿�" << std::endl;
}

void Cow::makeSound()
{
	std::cout << "����~" << std::endl;
}

Animal::Animal()
{
}

Animal::~Animal()
{
}

Dog::Dog()
{
}

Dog::~Dog()
{
}

Cat::Cat()
{
}

Cat::~Cat()
{
}

Cow::Cow()
{
}

Cow::~Cow()
{
}

