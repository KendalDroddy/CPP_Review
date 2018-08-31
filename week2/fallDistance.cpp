/********************************************************************* 
** Author: Kendal Droddy
** Date: 8/30/18
** Description: Calculates distance an object falls over time
*********************************************************************/ 
#include <iostream>
#include <string>

// Function prototype
float fallDistance(float fallTime);

/*********************************************************************
**                       MAIN
*********************************************************************/
int main()
{
  float fallTime, distance;

  //Get fall time from user
  std::cout << "Enter time in seconds that the object fell: ";
  std::cin >> fallTime;

  // Calculate distance and display results
  distance = fallDistance(fallTime);
  std::cout << "Fall distance: " << distance << std::endl;
}

/*********************************************************************
**                       fallDistance()
** Description: Calculates fall distance using the formula 
** d = .5(g(t)^2) where g = 9.8 and t = time in seconds
*********************************************************************/
float fallDistance(float fallTime)
{
  return .5 * 9.8 * (fallTime * fallTime);
}