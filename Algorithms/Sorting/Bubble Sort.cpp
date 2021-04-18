#include <iostream>
#include <string>
#include <vector>

using namespace std;

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
                swap(arr[i], arr[i-1]);
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
