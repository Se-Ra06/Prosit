#ifndef OBJET2D_H
#define OBJET2D_H


#include<string> 

using namespace std;

class Objet2D {

protected:

	int dim1;
	int dim2;

public:

	Objet2D(int dim1, int dim2);
	virtual int getPerimetre() const = 0;
	virtual int getAire() const = 0;
	virtual string afficheInfo() const = 0;

};

#endif 