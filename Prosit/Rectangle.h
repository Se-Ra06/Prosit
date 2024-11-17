#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygone.h"
#include <string>
using namespace std;

class Rectangle : public Polygone {
public:
	Rectangle(int dim1, int dim2);
	int getLongueur() const;
	int getLargeur() const;

	virtual int getPerimetre() const override;
	virtual int getAire() const override;
	virtual string afficheInfo() const override;
};

#endif