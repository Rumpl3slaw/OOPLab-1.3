#include <iostream>
#include <Windows.h>
#include "Rational.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Rational X;
	X.Read();
	X.Display();
	X.Dodavannya();
	X.Vidnimannya();
	X.Mnojennya();
	X.Value();
}