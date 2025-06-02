#include <iostream>
#include "Animal.h"

void Dog::makeSound()
{
	std::cout << "港港!" << std::endl;
}

void Cat::makeSound()
{
	std::cout << "具克" << std::endl;
}

void Cow::makeSound()
{
	std::cout << "澜赣~" << std::endl;
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

