
#include <iostream>
#include "Point.h"
#include "TroisPoints.h"
using namespace std;
int main()
{
	Point P1(4, 6),P2(3, 6),y, P3, P4;
	Point	A, B, C;
	double x, y, z;
	
	cout << "afficher la valeur avant modification" << endl;
	P1.m_afficher();
	P1.setabs(12);
	cout << "L'abscisse de P1 est " << P1.getabs() << endl;
	P1.setord(12);
	cout << "L'ordonne de P1 est " << P1.getord() << endl;
	cout << "afficher la valeur avant modification" << endl;
	P1.m_afficher();
	cout << "la distance entre p2 et p1 est : " << P1.calculerDistance(P2) << endl;
	cout << "le centre entre p2 et p1 est : " ;
	P1.calculerMilieu(P2);
	cout << "afficher operateur + est : "  ;
	y= P1.operator+(P2);
	y.m_afficher();
	P3 = P1.operator+(P2);
	P4=P3.operator/(2);
	cout << "le centre entre p2 et p1 est : ";
		P4.m_afficher()  ;
		//heritage 
		cout << "entrer les coordonnes de trois points " << endl;
		cout<<"x1";
		cin >> x;
		A.s
	



}

