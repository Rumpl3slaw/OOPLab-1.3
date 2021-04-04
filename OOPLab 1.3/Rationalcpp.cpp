#include <iostream>
#include <Windows.h>
#include <math.h>
#include "Rational.h"

using namespace std;

bool Rational::Init(int a_a1, int b_b1, int a_a2, int b_b2)
{
	bool tmp;
	if (((a_a1 - int(a_a1) != 0) && (b_b1 - int(b_b1) != 0)) || ((a_a2 - int(a_a2) != 0) && (b_b2 - int(b_b2) != 0)))
	{
		cout << "Чисельник або знаменник введені неправильно" << endl;
		tmp = false;
	}
	else
	{
		a1 = a_a1;
		b1 = b_b1;
		a2 = a_a2;
		b2 = b_b2;
		tmp = true;
	}
	return tmp;
}
void Rational::Read()
{
	int a1, b1, a2, b2;
	do {
		cout << "Введіть чисельник першого дробу(а1) = ";cin >> a1;
		cout << "Введіть знаменник першого дробу(b1) = ";cin >> b1;
		cout << "Введіть чисельник другого дробу(а2) = ";cin >> a2;
		cout << "Введіть знаменник другого дробу(b2) = ";cin >> b2;
	} while (!Init(a1, b1, a2, b2));
}
void Rational::Display()
{
	cout <<"Перший дріб : "<< Get_a1() << "/" << Get_b1() << endl;
	cout <<"Другий дріб : "<< Get_a2() << "/" << Get_b2() << endl;
}
double Rational::Mnojennya()
{
	int Ma = (a1 * a2);
	int Mb = (b1 * b2);
	cout << "Множення дробів = " << Ma <<"/"<<Mb<< endl;
	return Ma;
}
double Rational::Dodavannya()
{
	int Da = (a1 * b2 + a2 * b1);
	int Db = (b1 * b2);
	cout << "Додавання дробів = "<<Da<<"/"<<Db <<endl;
	return Da,Db;
}
double Rational::Vidnimannya()
{
	int Va = (a1 * b2 - a2 * b1);
	int Vb = (b1 * b2);
	cout << "Віднімання дробів = " << Va << "/" << Vb << endl;
	return Va, Vb;
}
double Rational::Value()
{
	cout << "Перший оперований дріб : " << Get_b1() << "/" << Get_a1() << endl;
	cout << "Другий оперований дріб : " << Get_b2() << "/" << Get_a2() << endl;
	return 1. * a1 / b1;
	Rational z;
	double x = z.Value();
}
