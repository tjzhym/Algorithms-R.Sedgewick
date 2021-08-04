// Problem :    Quick Sort øÏÀŸ≈≈–Ú
// Solution:    https://github.com/tjzhym/Algorithms-R.Sedgewick
// Author :     zhym (tjzhym)
// Date   :     2021-8-4


#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	
    int Partition(vector<int>& a, int low, int high)
    {
        int key = a[low];
        while (low < high)
        { 
            while (low < high && a[high] >= key) 
                high--;
            a[low] = a[high];
            while (low < high && a[low] <= key) 
                low++;
            a[high] = a[low];
        }
        a[low] = key;
        return low;
    }
    void QuickSort(vector<int>& a, int low, int high)
    {
        if (low < high)
        {
            int pivot = Partition(a, low, high);
            QuickSort(a, low, pivot - 1);
            QuickSort(a, pivot + 1, high);
        }
    }
};


int main()
{
    Solution Solution;
    vector<int> arr = { 10, 10, 9, 9, 8, 7, 5, 6, 4, 3, 4, 2 };
    Solution.QuickSort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ' ';
    }

    return 0;

}
