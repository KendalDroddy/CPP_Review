/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/3/18
*********************************************************************/ 
#include <iostream>

int hailstone(int number);

/*********************************************************************
**                       MAIN
*********************************************************************/
#include <iostream>

int main()
{
  int startNum, steps;

  // Get starting number from user
  std::cout << "Please enter starting number: ";
  std::cin >> startNum;

  // Run hailstone on the number
  steps = hailstone(startNum);
  std::cout << "Step Count: " << steps << std::endl;
}

/*********************************************************************
**                       hailstone()
*********************************************************************/
int hailstone(int number)
{
  int stepCount = 0;

  while(number != 1)
  {
    if(number % 2 == 0)
    {
      number = number / 2;
    }
    else
      number = (number * 3) + 1;

    stepCount++;
  }
  return stepCount;
}