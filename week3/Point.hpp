/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/10/18
*********************************************************************/ 
#ifndef POINT_HPP
#define POINT_HPP

/*********************************************************************
**               Point Class Declaration
*********************************************************************/
class Point
{
  private:
    double xCoord,
           yCoord;

  public:
    // Get functions
    double getX() const;
    double getY() const;

    // Set functions
    void setX(double);
    void setY(double);

    // Constructors
    Point(double, double); 
    Point();

    // Distance between points
    double distanceTo(const Point&);

};
#endif