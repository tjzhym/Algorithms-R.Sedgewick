// Problem :    Insertion Sort —°‘Ò≈≈–Ú
// Solution:    https://github.com/tjzhym/Algorithms-R.Sedgewick
// Author :     zhym (tjzhym)
// Date   :     2021-8-3


#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> InsertionSort(vector<int> arr) {
        int insertionIndex = 0, insertionNumber = 0;

        if (arr.empty())
            return arr;

        for (int i=1; i<arr.size(); i++) {
            insertionIndex = i;
            insertionNumber = arr[i];
            while (insertionIndex > 0 && arr[insertionIndex - 1] > insertionNumber) {
                arr[insertionIndex] = arr[insertionIndex - 1];
                insertionIndex--;
            }
            arr[insertionIndex] = insertionNumber;
        }
        return arr;
    }
};

int main()
{
    Solution Solution;
    vector<int> arr = { 10, 10, 9, 9, 8, 7, 5, 6, 4, 3, 4, 2 };
    vector<int> arrSorted = Solution.InsertionSort(arr);

    for (int i = 0; i < arrSorted.size(); i++) {
        cout << arrSorted[i] << ' ';
    }

    return 0;

}
