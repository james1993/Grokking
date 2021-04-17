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

void insertion_sort(vector<int>& arr)
{
    for(int i = 1; i < arr.size(); i++)
    {
        int j = i;
        while(arr[j] < arr[j-1])
        {
            swap(arr, j, j-1);
            j--;
        }
    }
}

int main()
{
  vector<int> test_vector = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  insertion_sort(test_vector);
  
  for(int i = 0; i < test_vector.size(); i++)
  {
      cout << test_vector[i] << " ";
  }
}
