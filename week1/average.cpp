/********************************************************************* 
** Author: Kendal Droddy
** Date: 8/26/18
** Description: Accepts five numbers and displays their average
*********************************************************************/ 
#include <iostream>
#include <string>

int main()
{
  float num1, num2, num3, num4, num5, average;

  // Get five numbers from user
  std::cout << "Please enter five numbers: ";
  std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

  // Calculate and display average
  average = (num1 + num2 + num3 + num4 + num5) / 5;
  std::cout << "The average of these numbers is: " << average << std::endl;
}
