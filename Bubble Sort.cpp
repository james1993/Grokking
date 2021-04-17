#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(vector<int>& arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubble_sort(vector<int>& arr)
{
    bool isSorted = false;
    
    while(!isSorted)
    {
        isSorted = true;
        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] < arr[i-1])
            {
                swap(arr, i, i-1);
                isSorted = false;
            }
        }
    }
}


int main()
{
  vector<int> test_vector = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  bubble_sort(test_vector);
  
  for(int i = 0; i < test_vector.size(); i++)
  {
      cout << test_vector[i] << " ";
  }
}
