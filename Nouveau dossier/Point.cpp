#include "Point.h"
#include<iostream>
using namespace std;
Point::Point():abs(0),ord(0)
{
}

Point::Point(double abs, double ord):abs(abs),ord(ord)
{
}

double Point::getabs() const
{
	return abs;
}

void Point::setabs(double x)
{
	this->abs = x;
}

double Point::getord() const
{
	return ord;
}

void Point::setord(double y)
{
	this->ord = y;
}

void Point::m_afficher() const
{
	cout << "(" << this->abs << "," << this->ord <<")"<< endl;
}

double Point::calculerDistance(Point p)
{
	int d;
	d = sqrt(pow(this->abs - p.abs, 2) + pow(this->ord - p.ord,2));
	return d;
}

void Point::calculerMilieu(Point p)
{
	double mabs, mord;
	mabs = (this->abs + p.abs) / 2;
	mord = (this->ord + p.ord) / 2;
	cout << "(" << mabs << "," << mord << ")" << endl;
}

Point Point::operator+(Point p)
{
	Point r;
	r.abs = p.abs + this->abs;
	r.ord = p.ord + this->ord;
	return r;
}

Point Point::operator/(int r)
{
	Point h;
	h.abs = (this->abs) / r;
	h.ord = (this->ord) / r;
	return h;
}
