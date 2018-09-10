/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/10/18
*********************************************************************/ 
#ifndef BOX_HPP
#define BOX_HPP

/*********************************************************************
**               Box Class Declaration
*********************************************************************/
class Box
{
  private:
    double height;
    double width;
    double length;

  public:
    void setHeight(double);
    void setWidth(double);
    void setLength(double);
    double getVolume();
    double getSurfaceArea();

    //Constructors
    Box();
    Box(double, double, double);
};
#endif