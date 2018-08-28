/********************************************************************* 
** Author: Kendal Droddy
** Date: 8/27/18
** Description: Displays largest and smallest of user entered numbers
*********************************************************************/ 
#include <iostream>
#include <string>

// Function prototype
int getNumCount();

/*********************************************************************
**                       MAIN
*********************************************************************/
int main()
{
  int numCount, currentNum, min, max;

  // Get numCount from user
  numCount = getNumCount();

  // Get integers from user while tracking min and max integers
  std::cout << "Please enter " << numCount << " integers." << std::endl;

  for (int i = 0; i < numCount; i++)
  {
    std::cin >> currentNum;

    if (i == 0)
    {
      max = currentNum;
      min = currentNum;
    }

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

/*********************************************************************
**                       getNumCount()
** Description: Gets and returns numCount from user
*********************************************************************/
int getNumCount()
{
  int x;
  std::cout << "How many integers would you like to enter?" << std::endl;
  std::cin >> x;
  return x;
}