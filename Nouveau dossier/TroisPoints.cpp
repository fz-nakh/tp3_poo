#include "TroisPoints.h"
#include<iostream>
using namespace std;

TroisPoints::TroisPoints(Point p, Point d, Point t):premier(p),deuxieme(d),troisieme(t)
{
}

bool TroisPoints::testerAlignement(Point A, Point B, Point C)
{
	if((A.calculerDistance(B) == A.calculerDistance(C) + B.calculerDistance(C)) || (A.calculerDistance(C) == A.calculerDistance(B) + B.calculerDistance(C)) || (B.calculerDistance(C) == A.calculerDistance(C) + A.calculerDistance(B)))
		return true;
	else 
	return false;
}

bool TroisPoints::m_TriangleEquilateral(Point A, Point B, Point C)
{
	if (A.calculerDistance(B) == A.calculerDistance(C) == B.calculerDistance(C))
		return true;
	else
		return false;
}

Point TroisPoints::getpremier() const
{
	return premier;
}
void TroisPoints::setpremier(Point& p)
{
	premier = p;
}
Point TroisPoints::getdeuxieme() const
{
	return deuxieme;
}
void TroisPoints::setdeuxieme(Point& p)
{
	deuxieme = p;
}

Point TroisPoints::gettroisieme() const
{
	return troisieme;
}

void TroisPoints::settroisieme(Point& p)
{
	troisieme = p;
}
