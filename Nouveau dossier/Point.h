#pragma once
#include<iostream>
using namespace std;
class Point
{
public:
	        Point(); 
			Point(double abs, double ord);
			double getabs()const;
			void setabs(double x);
			double getord()const;
			void setord(double y);
			void m_afficher()const;
			double calculerDistance(Point p);
			void calculerMilieu(Point p);
			Point operator+(Point p);
			Point operator/(int r);

protected: 
	double abs, ord;
};

