#include <iostream>
#include <string>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int start, int end)
{
    int pivot = arr[end];
    int p_index = start;
    for(int i = start; i < end; i++)
    {
        if(arr[i] <= pivot) 
        {
            swap(arr[i], arr[p_index]);
            p_index++;
        }
    }
    swap(arr[end], arr[p_index]);
    
    return p_index;
}

void quick_sort(vector<int>& arr, int start, int end)
{
    if(start < end)
    {
        int p_index = partition(arr, start, end);
        quick_sort(arr, start, p_index - 1);
        quick_sort(arr, p_index + 1, end);
    }
}
int main()
{
  vector<int> test_vector = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  quick_sort(test_vector, 0, 10);
  
  for(int i = 0; i < test_vector.size(); i++)
  {
      cout << test_vector[i] << " ";
  }
}
