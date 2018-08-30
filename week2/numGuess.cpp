/********************************************************************* 
** Author: Kendal Droddy
** Date: 8/29/18
** Description: Guesses user entered number
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
  int userNumber, userGuess, numGuesses = 1;

  // Get number to guess from user
  std::cout << "Enter the number for the player to guess." << std::endl;
  std::cin >> userNumber;

  // Get user's first guess
  std::cout << "Enter your guess." << std::endl;
  std::cin >> userGuess;

  while(userGuess != userNumber)
  {
    if(userGuess < userNumber)
    {
      std::cout << "Too low - try again." << std::endl;
      std::cin >> userGuess;
      numGuesses++;
    }
    if(userGuess > userNumber)
    {
      std::cout << "Too high - try again." << std::endl;
      std::cin >> userGuess;
      numGuesses++;
    }
  }

  std::cout << "You guessed it in " << numGuesses << " tries." << std::endl;
}

/*********************************************************************
**                       getNumCount()
** Description: Gets and returns numCount (x) from user
*********************************************************************/
int getNumCount()
{
  int x;
  std::cout << "How many integers would you like to enter?" << std::endl;
  std::cin >> x;
  return x;
}