#pragma once
#include <iostream>
#include <sstream>

class Rational {
private:
	int a1, b1, a2, b2;
public:
	int Get_a1() { return a1; }
	int Get_b1() { return b1; }
	int Get_a2() { return a2; }
	int Get_b2() { return b2; }

	void Set_a1(int a1) { this->a1 = a1; }
	void Set_b1(int b1) { this->b1 = b1; }
	void Set_a2(int a2) { this->a2 = a2; }
	void Set_2(int b2) { this->b2 = b2; }

	bool Init(int a1, int b1,int a2,int b2);
	void Display();
	void Read();

	double Value();
	double Dodavannya();
	double Vidnimannya();
	double Mnojennya();

};