#ifndef CERCLE_H
#define CERCLE_H
#include "Objet2D.h"
#include <string>
using namespace std;

class Cercle : public Objet2D {
public:
	Cercle(int dim1);
	int getPerimetre() const override;
	int getAire() const override;
	string afficheInfo() const override;
};

#endif