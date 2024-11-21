#include "Student.h"
#include <iostream>

Student::Student(char* n) :Student(n, 0, 0)
{
}

Student::Student(char* n, int a) :Student(n, a, 0)
{
}

Student::Student(char* n, double aG) :Student(n, 0, aG)
{
}

Student::Student(char* n, int a, double aG)
{
	age = a;
	averageGrade = aG;
	int size = strlen(n);
	name = new char[size + 1];
	strcpy_s(name, size + 1, n);
	/*int i = 0;
	while (n[i] != '\0')
	{
		name[i] = n[i];
		i++;
	}
	name[size] = '\0';*/  // another solution
}

Student::~Student()
{
	if (name != nullptr)
		delete[] name;
}

void Student::printStudent()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Grade: " << averageGrade << std::endl;
}