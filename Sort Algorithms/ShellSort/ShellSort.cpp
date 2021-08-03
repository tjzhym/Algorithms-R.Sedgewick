// Problem :    Shell Sort Ï£¶ûÅÅÐò
// Solution:    https://github.com/tjzhym/Algorithms-R.Sedgewick
// Author :     zhym (tjzhym)
// Date   :     2021-8-3


#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> ShellSort(vector<int> arr) {
        int gap = 1,currentIndex = 0,changeTemp = 0;

        while (gap < arr.size() / 3)
            gap = 3 * gap + 1;
    	
        if (arr.empty())
            return arr;

        while (gap >= 1) {
	        for (int i=gap; i<arr.size(); i++) {
                currentIndex = i;
	        	while ((currentIndex-gap)>=0 && arr[currentIndex-gap]>arr[currentIndex]) {
					changeTemp = arr[currentIndex];
                    arr[currentIndex] = arr[currentIndex - gap];
                    arr[currentIndex - gap] = changeTemp;
                    currentIndex -= gap;
                }
	        }
            gap /= 3;
        }
        return arr;
    }
};

int main()
{
    Solution Solution;
    vector<int> arr = { 10, 10, 9, 9, 8, 7, 5, 6, 4, 3, 4, 2 };
    vector<int> arrSorted = Solution.ShellSort(arr);

    for (int i = 0; i < arrSorted.size(); i++) {
        cout << arrSorted[i] << ' ';
    }

    return 0;

}
