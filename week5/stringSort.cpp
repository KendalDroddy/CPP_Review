/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/13/18
*********************************************************************/ 
#include <iostream>
using std::string;

// Function prototypes
void selectionSort(string [], int);
void showArray(const string [], int);

/*********************************************************************
**                       MAIN
*********************************************************************/
int main()
{
  const int SIZE = 6;

  string values[SIZE] = {"apple", "bacon", "cat", "zebra", "rabbit", "monkey"};

  showArray(values, SIZE);

  selectionSort(values, SIZE);

  showArray(values, SIZE);
}

void selectionSort(string array[], int size)
{
  int startScan, minIndex;
  string minValue;

  for(startScan = 0; startScan < (size - 1); startScan++)
  {
    minIndex = startScan;
    minValue = array[startScan];
    for(int index = startScan + 1; index < size; index++)
    {
      if(array[index] < minValue)
      {
        // Indentify lowest value
        minValue = array[index];
        minIndex = index;
      }
    }
    // Swap start scan with lowest value
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
  }
}

void showArray(const string array[], int size)
{
  for(int i = 0; i < size; i++)
  {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
}