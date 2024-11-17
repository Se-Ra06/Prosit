#include <iostream>
#include "Triangle.h"
#include "Objet2D.h"
#include <string>
using namespace std;

Triangle::Triangle(int dim1, int dim2, int dim3) : Polygone(dim1, dim2), dim3(dim3) {}

int Triangle::getPerimetre() const {
	return dim1 + dim2 + dim3;
}

int Triangle::getAire() const {
	return 0.5 * dim2 * dim3;  
}

string Triangle::afficheInfo() const {

	return "Perimetre :" + to_string(getPerimetre()) + ", Aire : " + to_string(getAire());
}