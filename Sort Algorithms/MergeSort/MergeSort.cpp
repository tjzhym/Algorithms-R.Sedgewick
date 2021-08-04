// Problem :    Merge Sort πÈ≤¢≈≈–Ú
// Solution:    https://github.com/tjzhym/Algorithms-R.Sedgewick
// Author :     zhym (tjzhym)
// Date   :     2021-8-4


#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	
    vector<int> Merge(vector<int> arr, int beginIndex,int midIndex, int endIndex) {
        vector<int> arrCopied = arr;
        int leftIndex = beginIndex, rightIndex = midIndex + 1;

    	for (int i=beginIndex; i<=endIndex; i++) {
            if (leftIndex > midIndex)
                arr[i] = arrCopied[rightIndex++];
            else if (rightIndex > endIndex)
                arr[i] = arrCopied[leftIndex++];
            else if (arrCopied[leftIndex] > arrCopied[rightIndex])
                arr[i] = arrCopied[rightIndex++];
            else if (arrCopied[leftIndex] <= arrCopied[rightIndex])
                arr[i] = arrCopied[leftIndex++];
    	}
        return arr;
    }
	
    vector<int> MergeSort(vector<int> arr, int beginIndex, int endIndex) {
        if (beginIndex >= endIndex) return arr;
        int midIndex = (beginIndex + endIndex) / 2;
        arr = MergeSort(arr, beginIndex, midIndex);
        arr = MergeSort(arr,midIndex + 1, endIndex);
        arr = Merge(arr, beginIndex, midIndex, endIndex);
        return arr;
    }
};

int main()
{
    Solution Solution;
    vector<int> arr = { 10, 10, 9, 9, 8, 7, 5, 6, 4, 3, 4, 2 };
    vector<int> arrSorted = Solution.MergeSort(arr,0,arr.size()-1);

    for (int i = 0; i < arrSorted.size(); i++) {
        cout << arrSorted[i] << ' ';
    }

    return 0;

}
