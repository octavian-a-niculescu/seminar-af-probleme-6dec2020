#pragma once
#include <iostream>

struct Obiect {
	int _greutate, _beneficiu;

	void Citire();
	double Raport();
	bool operator < (Obiect obiect2)
	{
		return _greutate / _beneficiu < obiect2._greutate / obiect2._beneficiu;
	}
	bool operator > (Obiect obiect2)
	{
		return _greutate / _beneficiu > obiect2._greutate / obiect2._beneficiu;
	}
	bool operator == (Obiect obiect2)
	{
		return _greutate / _beneficiu == obiect2._greutate / obiect2._beneficiu;
	}
};
