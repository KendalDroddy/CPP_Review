/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/13/18
*********************************************************************/ 
#include <iostream>
#include <string>
#include "Student.hpp"

// Constructor
Student::Student(std::string n, double s)
{
  name = n;
  score = s;
}

// Get methods
std::string Student::getName()
{
  return name;
}

double Student::getScore()
{
  return score;
}