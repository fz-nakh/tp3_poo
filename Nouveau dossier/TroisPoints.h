#pragma once
#include "Point.h"
#include<iostream>
using namespace std;
class TroisPoints :
    public Point
{

public:
    TroisPoints(Point A, Point B, Point C);
    bool testerAlignement(Point A, Point B, Point C);
    bool  m_TriangleEquilateral(Point A, Point B, Point C);
    Point  getpremier()const;
    void setpremier(Point & p);
    Point getdeuxieme()const;
    void  setdeuxieme(Point &p);
    Point gettroisieme()const;
    void  settroisieme(Point &p);
private:
   Point premier, deuxieme,troisieme;
       
    /*




12. Dans la fonction principale int main(), demandez `a l’utilisateur de saisir les coordonn´ees de
trois points. Ensuite, utilisez les classes et les m´ethodes pr´ec´edentes pour afficher tous les d´etails
sur ces trois points, les milieux, les distances qui les s´eparent, afficher s’ils sont align´es, s’ils
forment un triangle ´equilat´eral...*/

};

