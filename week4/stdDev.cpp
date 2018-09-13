/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/13/18
*********************************************************************/ 
#include <iostream>
#include <string>
#include <cmath>
#include "Student.hpp"

// Function prototype
double stdDev(Student *ptrStudent[], int size);

int main()
{
  Student *ptrStudent[2];

  Student kendal("Kendal", 94);
  Student jamie("Jamie", 91);

  ptrStudent[0] = &kendal;
  ptrStudent[1] = &jamie;

  std::cout << ptrStudent[1]->getScore() << std::endl;

  double result = stdDev(ptrStudent, 2);

  std::cout << result << std::endl;

}

double stdDev(Student *ptrStudent[], int size)
{
  double total,
         mean,
         stdDev;

  // Total the scores
  for(int i = 0; i < size; i++)
  {
    total += ptrStudent[i]->getScore();
  }

  // Get mean
  mean = total / size;

  // Reset total for reuse
  total = 0;

  // Subtract each score from the mean, square the result
  // then find the mean of these sqaured differences
  for(int i = 0; i < size; i++)
  {
    total += pow(ptrStudent[i]->getScore() - mean, 2);
  }
  mean = total / size;

  // Find the square root of the new mean
  stdDev = sqrt(mean);

  return stdDev;
}