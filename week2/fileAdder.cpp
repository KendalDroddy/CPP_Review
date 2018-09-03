/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/3/18
** Description: Adds numbers from a file and saves the sum to sum.txt
*********************************************************************/ 
#include <iostream>
#include <fstream>
#include <string>

// Function prototype
float fallDistance(float fallTime);

/*********************************************************************
**                       MAIN
*********************************************************************/
int main()
{
  std::ifstream inputFile;
  std::string fileName;
  int num = 0, sum;


  // Get file name from user and open file
  std::cout << "Please enter the file name: ";
  std::cin >> fileName;

  // Open file and sum its contents if file successfully opens
  inputFile.open(fileName);

  if(inputFile)
  {
    while(inputFile >> num)
    {
      sum += num;
    }
    // Write sum to output file
    std::ofstream outputFile;
    outputFile.open("sum.txt");
    outputFile << sum;
    outputFile.close();
  }
  else
    std::cout << "Could not access file." << std::endl;

  // Close input file
  inputFile.close();
}

