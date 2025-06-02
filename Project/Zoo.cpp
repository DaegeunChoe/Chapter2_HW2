#include <cstdlib>
#include <ctime>
#include "Zoo.h"
#include "Animal.h"

void Zoo::addAnimal(Animal* animal)
{
	if (count >= max)
	{
		// �� �迭 ����
		Animal** newArray = new Animal*[max * 2];

		// ���� ��Ҹ� ����
		for (int i = 0; i < count; i++)
		{
			newArray[i] = animals[i];
		}
		
		// �� �迭�� �ٲٰ�, ���� �迭 ����
		delete animals;
		animals = newArray;
		max *= 2;
	}
	if (animal == nullptr)
	{
		return;
	}
	animals[count] = animal;
	count += 1;
}

void Zoo::performActions()
{
	for (int i = 0; i < count; i++)
	{
		if (animals[i] != nullptr)
		{
			animals[i]->makeSound();
		}
	}
}

Zoo::~Zoo()
{
	for (int i = 0; i < count; i++)
	{
		if (animals[i] != nullptr)
		{
			delete animals[i];
		}
	}
	delete animals;
}

Zoo::Zoo()
{
	count = 0;
	max = 10;
	animals = new Animal*[max];
	srand(time(NULL));
}

// ���� ������ �����ϴ� �Լ�
// - 0, 1, 2 �� �ϳ��� ������ �����Ͽ� ���� Dog, Cat, Cow ��ü �� �ϳ��� �������� �����մϴ�.
// - ������ ��ü�� Animal Ÿ���� �����ͷ� ��ȯ�˴ϴ�.
// - �Է� �Ű�����: ����
// - ��ȯ��: Animal* (������ ���� ��ü�� ������)
Animal* createRandomAnimal()
{
	int dice = rand() % 3;
	switch (dice)
	{
	case 0:
		return new Dog();
	case 1:
		return new Cat();
	case 2:
		return new Cow();
	}
}