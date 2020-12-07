#include "Header.h"
#include <iostream>

void Obiect::Citire()
{
	std::cin >> _greutate >> _beneficiu;
}

double Obiect::Raport()
{
	return (double)_greutate / _beneficiu;
}

bool Obiect::operator < (Obiect obiect2)
{
	return _greutate / _beneficiu < obiect2._greutate / obiect2._beneficiu;
}
bool Obiect::operator > (Obiect obiect2)
{
	return _greutate / _beneficiu > obiect2._greutate / obiect2._beneficiu;
}
bool Obiect::operator == (Obiect obiect2)
{
	return _greutate / _beneficiu == obiect2._greutate / obiect2._beneficiu;
}
