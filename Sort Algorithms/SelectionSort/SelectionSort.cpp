// Problem :    Selection Sort —°‘Ò≈≈–Ú
// Solution:    https://github.com/tjzhym/Algorithms-R.Sedgewick
// Author :     zhym (tjzhym)
// Date   :     2021-8-3


#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> SelectionSort(vector<int> arr) {
        int minIndex = 0;
        int exchangeTemp = 0;

        if (arr.empty())
            return arr;

        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = i+1; j < arr.size(); j++) {
                if (arr[minIndex] > arr[j])
                    minIndex = j;
            }
            exchangeTemp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = exchangeTemp;
        }
        return arr;
    }
};

int main()
{
    Solution Solution;
    vector<int> arr = { 10, 10, 9, 9, 8, 7, 5, 6, 4, 3, 4, 2 };
    vector<int> arrSorted = Solution.SelectionSort(arr);

    for (int i = 0; i < arrSorted.size(); i++) {
        cout << arrSorted[i] << ' ';
    }

    return 0;

}
