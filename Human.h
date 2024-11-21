#pragma once
class Human
{
private:
	char* name;
	short age;
public:
	short getAge();
	void setAge(short);
	char* getName();
	void setName(char*);

	Human();
	Human(char*, short);
	Human(char*);
	Human(short);
	void HumanPrint();
	~Human();
};

