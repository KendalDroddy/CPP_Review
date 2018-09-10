/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/10/18
*********************************************************************/ 
#include "Box.hpp"
#include <iostream>

Box::Box()
{
  setHeight(1.0);
  setWidth(1.0);
  setLength(1.0);
}

Box::Box(double height, double width, double length)
{
  setHeight(height);
  setWidth(width);
  setLength(length);
}

void Box::setHeight(double h)
{
  height = h;
}

void Box::setWidth(double w)
{
  width = w;
}

void Box::setLength(double l)
{
  length = l;
}

double Box::getVolume()
{
  return length * width * height;
}

double Box::getSurfaceArea()
{
  double area = 0;

  area += (2 * (length * width));
  area += (2 * (length * height));
  area += (2 * (width * height));

  return area;
}
