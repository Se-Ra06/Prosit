#include <iostream>
#include "Objet2D.h"
#include "Polygone.h"
#include "Rectangle.h"
#include "Cube.h"
#include "Triangle.h"
#include "Cercle.h"
using namespace std;

int main() {
	int l = 1;
	int dim1;
	int dim2;
	int dim3;
	int tcote;
	int r;
	
	Objet2D* forme1 = nullptr;
	Polygone* forme2 = nullptr;

	while (l == 1) {
		cout << "Entrez le rayon :" << endl;
		cin >> r;

		if (r > 0) {
			cout << "Vous avez un cercle de rayon :" << r << endl;
			forme1 = new Cercle(r);
			cout << "Informations sur le cercle :" << endl;
			cout << forme1->afficheInfo() << endl;
			cout << endl;
		}
		else if (r == 0) {
			cout << "Entrez la premiere valeur :" << endl;
			cin >> dim1;
			cout << "Entrez la deuxieme valeur :" << endl;
			cin >> dim2;
			cout << "Entrez la troisieme valeur :" << endl;
			cin >> dim3;

			if (dim3 == 0) {
				if (dim1 != dim2) {
					forme2 = new Rectangle(dim1, dim2);
					cout << "Vous avez un rectangle de :" << endl;
					cout << "Longueur :" << dim1 << endl;
					cout << "Largeur :" << dim2 << endl;
					cout << "Informations sur le rectangle :" << endl;
					cout << forme2->afficheInfo() << endl;
					cout << endl;
				}
				if (dim1 == dim2) {
					tcote = dim1 = dim2;
					forme2 = new Cube(dim1, dim2, tcote);
					cout << "Vous avez un carre de :" << endl;
					cout << "Cote :" << tcote;
					cout << "Informations sur le carre :" << endl;
					cout << forme2->afficheInfo() << endl;
					cout << endl;
				}
			}
			else if (dim3 > 0) {
				forme2 = new Triangle(dim1, dim2, dim3);
				cout << "Vous avez un triangle" << endl;
				cout << "Informations sur le triangle :" << endl;
				cout << forme2->afficheInfo() << endl;
				cout << endl;
			}
		}
	}
	return 0;
}