#include <iostream>
#include <string>
#include <vector>

using namespace std;

int binary_search(const vector<int> & arr, int target)
{
    int first = 0;
    int last = arr.size() - 1;
    
    while(first <= last)
    {
        int mid = first + (last - first)/2; //prevent overflow
        if(arr[mid] == target) return mid;
        else if(target < arr[mid]) last = mid - 1;
        else first = mid + 1;
    }
    
    return -1;
}

int main()
{
  vector<int> test_vector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int found = binary_search(test_vector, 7);
  cout << "7 is at index: " << found;
}
