#include "Human.h"
#include "iostream"

using namespace std;

short Human::getAge()
{
	return age;
}

void Human::setAge(short age2)
{
	cin >> age2;
	age = age2;
}

char* Human::getName()
{
	return name;
}

void Human::setName(char* name2)
{
	delete[] name;
	if (name2 != nullptr)
	{
		int size = strlen(name2);
		name = new char[size + 1];
		strcpy_s(name, size + 1, name2);
	}
	else
	{
		name = nullptr;
	}
}

Human::Human():Human(nullptr, 0)
{
}

Human::Human(char* name2, short age2)
{
	if (age2 < 0)
	{
		age = 0;
	}
	else
	{
		age = age2;
	}
	if (name2 != nullptr)
	{
		int size = strlen(name2);
		name = new char[size + 1];
		strcpy_s(name, size + 1, name2);
	}
	else
	{
		name = nullptr;
	}

}

Human::Human(char* name2):Human(name2,0)
{
}

Human::Human(short age2):Human(nullptr, age2)
{
}

void Human::HumanPrint()
{
	if (name != nullptr)
	{
		cout << "Age: " << age << endl;
		cout << "Name: " << name << endl;
	}
	else
	{
		cout << "Age: " << age << endl;
		cout << "Name: you don't have name" << endl;
	}
}

Human::~Human()
{
	if (name != nullptr)
	{
		delete[] name;
	}
}
