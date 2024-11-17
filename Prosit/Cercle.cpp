#include <iostream>
#include "Cercle.h"
#include "Objet2D.h"
#include <string>
using namespace std;

#define PI 3.14

Cercle::Cercle(int dim1) : Objet2D(dim1, 0) {}

int Cercle::getPerimetre() const {
	return 2 * PI * dim1;
}
int Cercle::getAire() const {
	return PI * dim1 * dim1;

}
string Cercle::afficheInfo() const {
	return "Perimetre :" + to_string(getPerimetre()) + ", Aire : " + to_string(getAire());
}