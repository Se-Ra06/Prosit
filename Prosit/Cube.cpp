#include<iostream> 
#include "Rectangle.h"
#include "Cube.h" 
#include <string> 


using namespace std;

Cube::Cube(int dim1, int dim2, int tcote) : Rectangle(dim1, dim2), tcote(tcote) {}

int Cube::getCote() const {

    return tcote;

}

int Cube::getPerimetre() const {

    return tcote * 4;

}

int Cube::getAire() const {

    return tcote * tcote;

}

std::string Cube::afficheInfo() const {
    return "Perimetre :" + to_string(getPerimetre()) + ", Aire : " + to_string(getAire());
}