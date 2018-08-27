/********************************************************************* 
** Author: Kendal Droddy
** Date: 8/26/18
** Description: Converts Celsius to Fahrenheit
*********************************************************************/ 
#include <iostream>
#include <string>

int main()
{
  double celsius, fahrenheit, conversion;
  conversion = 1.8;

  // Get user input
  std::cout << "Please enter a Celsium temperature: ";
  std::cin >> celsius;

  // Convert and display results
  fahrenheit = (conversion * celsius) + 32;
  std::cout << fahrenheit << std::endl;
}
