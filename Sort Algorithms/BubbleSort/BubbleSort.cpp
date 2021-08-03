// Problem :    Bubble Sort √∞≈›≈≈–Ú
// Solution:    https://github.com/tjzhym/Algorithms-R.Sedgewick
// Author :     zhym (tjzhym)
// Date   :     2021-8-3


#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> BubbleSort(vector<int> arr) {
        int temp = 0;

        if (arr.empty())
            return arr;
        
    	for (int i=0; i<arr.size()-1; i++) {
    		for (int j=0; j<arr.size()-i-1; j++) {
    			if (arr[j]>arr[j+1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
    			}
    		}
    	}
        return arr;
    }
};

int main()
{
    Solution Solution;
    vector<int> arr = { 10, 10, 9, 9, 8, 7, 5, 6, 4, 3, 4, 2 };
    vector<int> arrSorted = Solution.BubbleSort(arr);

	for (int i=0; i<arrSorted.size(); i++) {
        cout << arrSorted[i] << ' ';
	}
	
	return 0;
	
}
