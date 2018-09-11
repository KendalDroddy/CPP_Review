/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/10/18
*********************************************************************/ 
#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include "Point.hpp"

Point::Point()
{
  setX(0);
  setY(0);
}

Point::Point(double x, double y)
{
  setX(x);
  setY(y);
}

double Point::getX() const
{
  return xCoord;
}

double Point::getY() const
{
  return yCoord;
}

void Point::setX(double x)
{
  xCoord = x;
}

void Point::setY(double y)
{
  yCoord = y;
}

double Point::distanceTo(const Point& p)
{
  double x1, x2, y1, y2;

  x1 = p.getX();
  y1 = p.getY();
  x2 = xCoord;
  y2 = yCoord;

  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
