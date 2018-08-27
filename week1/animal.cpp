/********************************************************************* 
** Author: Kendal Droddy
** Date: 8/26/18
** Description: Accept's and displays user's favorite animal.
*********************************************************************/ 
#include <iostream>
#include <string>

// A simple program
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;
}
