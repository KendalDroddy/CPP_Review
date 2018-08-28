/********************************************************************* 
** Author: Kendal Droddy
** Date: 8/27/18
** Description: Displays largest and smallest of user entered numbers
*********************************************************************/ 
#include <iostream>
#include <string>

int main()
{
  int numCount, currentNum, min = 0, max = 0;

  // Get numCount from user
  std::cout << "How many integers would you like to enter?" << std::endl;
  std::cin >> numCount;

  // Get integers from user while tracking min and max integers
  std::cout << "Please enter " << numCount << " integers." << std::endl;

  for (int i = 0; i < numCount; i++)
  {
    std::cin >> currentNum;

    if (currentNum > max)  
    {
      max = currentNum;
    }

    if (currentNum < min)
    {
      min = currentNum;
    }

  }

  // Display results
  std::cout << "min: " << min << std::endl;
  std::cout << "max: " << max << std::endl;

}