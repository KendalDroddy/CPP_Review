#include "Box.hpp"
#include <iostream>

int main()
{
  Box box1(2.0, 5.0, 7.0);
  Box box2;

  double volume1 = box1.getVolume();
  double area1 = box1.getSurfaceArea();
  std::cout << area1 << std::endl;
  std::cout << volume1 << std::endl;
}