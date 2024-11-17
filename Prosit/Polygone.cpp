#include <iostream>
#include "Polygone.h"
#include "Objet2D.h"
#include <string>
using namespace std;


Polygone::Polygone(int dim1, int dim2) : Objet2D(dim1, dim2) {}

int Polygone::getPerimetre() const {
	return 2 * (dim1 + dim2);
}

int Polygone::getAire() const {
	return dim1 * dim2;
}

string Polygone::afficheInfo() const {
	return "Perimetre :" + to_string(getPerimetre()) + ", Aire : " + to_string(getAire());
}