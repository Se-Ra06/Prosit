#ifndef POLYGONE_H
#define POLYGONE_H
#include "Objet2D.h"
#include <string>
using namespace std;

class Polygone : public Objet2D {
public:

	Polygone(int dim1, int dim2);
	virtual int getPerimetre() const override;
	virtual int getAire() const override;
	virtual string afficheInfo() const override;
};


#endif