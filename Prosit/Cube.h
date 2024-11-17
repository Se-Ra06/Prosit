#ifndef CUBE_H
#define CUBE_H
#include "Rectangle.h" 

#include<string> 

using namespace std;

class Cube : public Rectangle {


private:

	int tcote;

public:

	Cube(int dim1, int dim2, int tcote);

	int getCote() const;
	int getPerimetre()const override;
	int getAire()const override;
	string afficheInfo() const override;


};

#endif
