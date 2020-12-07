#pragma once
#include <iostream>

struct Obiect {
	int _greutate, _beneficiu;

	void Citire();
	double Raport();
	bool operator < (Obiect obiect2);
	bool operator > (Obiect obiect2);
	bool operator == (Obiect obiect2);
};
