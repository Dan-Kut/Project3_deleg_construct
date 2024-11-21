#pragma once
class Student
{
private:
	char* name;
	int age;
	double averageGrade;
public:
	Student(char* n);
	Student(char* n, int a);
	Student(char* n, double aG);
	Student(char* n, int a, double aG);
	~Student();
	void printStudent();
};

