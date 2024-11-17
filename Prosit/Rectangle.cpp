#include <iostream> 
#include "Rectangle.h"
#include "Polygone.h"
#include <string>
using namespace std;

Rectangle::Rectangle(int dim1, int dim2) : Polygone(dim1, dim2) {}

int Rectangle::getLongueur() const {
    return dim1;
}

int Rectangle::getLargeur() const {
    return dim2;
}

int Rectangle::getPerimetre() const {
    return 2 * (dim1 + dim2);
}

int Rectangle::getAire() const {
    return dim1 * dim2;
}

string Rectangle::afficheInfo() const {
    return "Perimetre :" + to_string(getPerimetre()) + ", Aire : " + to_string(getAire());
}