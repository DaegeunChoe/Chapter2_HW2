#include <cstdlib>
#include <ctime>
#include "Zoo.h"
#include "Animal.h"

void Zoo::addAnimal(Animal* animal)
{
	if (count >= max)
	{
		// 새 배열 생성
		Animal** newArray = new Animal*[max * 2];

		// 기존 요소를 복사
		for (int i = 0; i < count; i++)
		{
			newArray[i] = animals[i];
		}
		
		// 새 배열로 바꾸고, 기존 배열 삭제
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

// 랜덤 동물을 생성하는 함수
// - 0, 1, 2 중 하나의 난수를 생성하여 각각 Dog, Cat, Cow 객체 중 하나를 동적으로 생성합니다.
// - 생성된 객체는 Animal 타입의 포인터로 반환됩니다.
// - 입력 매개변수: 없음
// - 반환값: Animal* (생성된 동물 객체의 포인터)
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