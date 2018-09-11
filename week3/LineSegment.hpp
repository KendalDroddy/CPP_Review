/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/10/18
*********************************************************************/ 
#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"

/*********************************************************************
**               LineSegment Class Declaration
*********************************************************************/
class LineSegment
{
  private:
    Point p1;
    Point p2;
  
  public:
    // Get methods
    Point getPointOne();
    Point getPointTwo();

    // Set methods
    void setPointOne(Point);
    void setPointTwo(Point);

    // Constructor
    LineSegment(Point, Point);

    // Additional methods
    double length();
    double slope();

};
#endif