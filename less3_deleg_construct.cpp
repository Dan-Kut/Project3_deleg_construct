//Source.cpp
#include <iostream>
#include "Student.h"
#include "Human.h"
using namespace std;
//TODO: описати розділення класа

//Делегування конструкторів
/*
це механізм, який дозволяє контрукторам класса викликати інші
конструктори цього же класу
ClassName(int a):ClassName(a,0){}
Делегування конструкторів дозволяє уникнути дублювання коду
*/
int main()
{
	/*char name[] = { 'B','o','g','d','a','n', '\0' };
	Student st = { name, 18,7.5 };
	st.printStudent();
	Student st2 = { name };
	st2.printStudent();
	Student st3 = { name, 17 };
	st3.printStudent();
	Student st4 = { name, 9.8 };
	st4.printStudent();
	return 0;*/



	// TASK 2

	char name[] = { 'B','o','g','d','a','n', '\0' };
	Human hum = { name, 14 };
	hum.HumanPrint();
	Human hum2 = { name };
	hum2.HumanPrint();
	Human hum3 = { 17 };
	hum3.HumanPrint();

}