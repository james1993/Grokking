#include <iostream>
#include <string>
#include <vector>

using namespace std;

void merge(vector<int>& left, vector<int>& right, vector<int>& arr)
{
    int i, j, k = 0;
    
    while(i < left.size() && j < right.size())
    {
        if(left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(j < right.size())
    {
        arr[k] = right[j];
        j++; k++;
    }
    while(i < left.size())
    {
        arr[k] = left[i];
        i++; k++;
    }
    
}

void merge_sort(vector<int>& arr)
{
    if(arr.size() < 2) return;
    
    int mid = arr.size()/2;
    vector<int> left;
    vector<int> right;
    
    for(int i = 0; i < mid; i++)
        left.push_back(arr[i]);
    for(int i = mid; i < arr.size(); i++)
        right.push_back(arr[i]);
        
    merge_sort(left);
    merge_sort(right);
    merge(left, right, arr);
}

int main()
{
  vector<int> test_vector = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  merge_sort(test_vector);
  
  for(int i = 0; i < test_vector.size(); i++)
  {
      cout << test_vector[i] << " ";
  }
}
