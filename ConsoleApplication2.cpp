#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void Voice()
	{
		cout << "*Animal noise*";
	}
};
class Dog : public Animal
{
public:
	void Voice() override
	{
		cout << "*Woof! Woof!* ";
	}
};
class Cat : public Animal
{
public:
	void Voice() override
	{
		cout << "*Meow! Meow!* ";
	}
};
class Cow : public Animal
{
public:
	void Voice() override
	{
		cout << "*Moo! Moo!* ";
	}
};


int main()
{
	
	
	Animal* arr[3] = {new Dog,new Cat,new Cow};
	for (Animal* i : arr)
	{
		i->Voice();
	}
	
}