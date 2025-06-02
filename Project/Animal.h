#pragma once

class Animal
{
public:
	Animal();
	virtual ~Animal();

	virtual void makeSound() = 0;
};

class Dog : public Animal
{
public:
	Dog();
	virtual ~Dog();

	virtual void makeSound() override;
};

class Cat : public Animal
{
public:
	Cat();
	virtual ~Cat();

	virtual void makeSound() override;
};

class Cow : public Animal
{
public:
	Cow();
	virtual ~Cow();

	virtual void makeSound() override;
};

