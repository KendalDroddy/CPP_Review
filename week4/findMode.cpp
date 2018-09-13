/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/11/18
*********************************************************************/ 
#include <iostream>
#include <vector>

std::vector<int> findMode(int numArray[], int size);

/*********************************************************************
**                       MAIN
*********************************************************************/
int main()
{
  const int ARRAY_SIZE = 5;

  int collection[ARRAY_SIZE] = {4, 5, 1, 2, 3};

  std::vector<int> modes = findMode(collection, ARRAY_SIZE);

  std::cout << modes.size() << std::endl;


}

/*********************************************************************
**                       findMode()
*********************************************************************/
std::vector<int> findMode(int nums[], int size)
{
  std::vector<int> modeNums;
  int highestFrequency = 0;

  for(int i = 0; i < size; i++)
  {
    int frequency = 0;

    for(int j = i + 1; j < size; j++)
    {
      if(nums[i] == nums[j])
      {
        frequency++;
      }
    }
    if(frequency > highestFrequency)
    {
      highestFrequency = frequency;
    }
  }
  // Vector 
  for(int i = 0; i < size; i++)
  {
    int frequency = 0;
    for(int j = i + 1; j < size; j++)
    {
      if(nums[i] == nums[j])
      {
        frequency++;
      }
    }
    if(frequency == highestFrequency)
    {
      modeNums.push_back(nums[i]);
    }
  }

   //For testing purposes only
  std::cout << modeNums.size() << std::endl;
  for (int i = 0; i < modeNums.size(); ++i)
  {
    std::cout << "The mode is: " << modeNums[i] << std::endl;
  }
  return modeNums;
}