/********************************************************************* 
** Author: Kendal Droddy
** Date: 8/26/18
** Description: Calculates fewest number of coins
*********************************************************************/ 
#include <iostream>
#include <string>

int main()
{
  int changeTotal, quarters, dimes, nickels, pennies;

  // Get user input
  std::cout << "Please enter an amount in cents less than a dollar." << std::endl;
  std::cin >> changeTotal;

  // Calculate quarters and remaining total
  quarters = changeTotal / 25;
  changeTotal = changeTotal % 25;

  // Calculate dimes and remaining total
  dimes = changeTotal / 10;
  changeTotal = changeTotal % 10;

  // Calculate nickels and remaining total
  nickels = changeTotal / 5;
  changeTotal = changeTotal % 5;

  // Calculate pennies
  pennies = changeTotal;

  // Display results
  std::cout << "Your change will be:" << std::endl;
  std::cout << "Q: " << quarters << std::endl;
  std::cout << "D: " << dimes << std::endl;
  std::cout << "N: " << nickels << std::endl;
  std::cout << "P: " << pennies << std::endl;
}
