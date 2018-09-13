/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/13/18
*********************************************************************/ 
#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>

/*********************************************************************
**               Box Class Declaration
*********************************************************************/
class Student
{
  private:
    std::string name;
    double score;
  public:
    Student(std::string, double);
    std::string getName();
    double getScore();
};
#endif