#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygone.h"
#include <string>
using namespace std;

class Triangle : public Polygone {
private:
	int dim3;
public: 
	Triangle(int dim1, int dim2, int dim3);
	int getPerimetre() const override;
	int getAire() const override;
	string afficheInfo() const override;
};

#endif