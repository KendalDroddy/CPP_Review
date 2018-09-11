/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/10/18
*********************************************************************/ 
#include <iostream>
#include <cmath>
#include "LineSegment.hpp"

LineSegment::LineSegment(Point p1, Point p2)
{
  setPointOne(p1);
  setPointOne(p2);
}

Point LineSegment::getPointOne()
{
  return p1;
}

Point LineSegment::getPointTwo()
{
  return p2;
}

void LineSegment::setPointOne(Point point1)
{
  p1 = point1;
}

void LineSegment::setPointTwo(Point point2)
{
  p2 = point2;
}

double LineSegment::length()
{
  return p1.distanceTo(p2);
}

double LineSegment::slope()
{
  double x1, x2, y1, y2;
  x1 = p1.getX();
  x2 = p2.getX();
  y1 = p1.getY();
  y2 = p2.getY();

  return ((y2 - y1)/(x2 - x1));
}

int main()
{
  Point pt1(-1, -1);
  Point pt2(1, 1);
  LineSegment ls1(pt1, pt2);

  //Test printout
  std::cout << "Point 1 is located at (" << pt1.getX() << "," << pt1.getY() << ")." << std::endl;
  std::cout << "Point 2 is located at (" << pt2.getX() << "," << pt2.getY() << ")." << std::endl;
  
  std::cout << pt1.getX() << std::endl;
  std::cout << pt1.getY() << std::endl;
  std::cout << pt2.getX() << std::endl;
  std::cout << pt2.getY() << std::endl;

  std::cout << "The length of this line is: " <<ls1.length() << std::endl;
  std::cout << "The slope of this line is: " << ls1.slope() << std::endl;
}