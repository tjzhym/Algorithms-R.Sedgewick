// Problem :    Binary Search ¶þ·Ö²éÕÒ
// Solution:    https://github.com/tjzhym/Algorithms-R.Sedgewick
// Author :     zhym (tjzhym)
// Date   :     2021-8-7


#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int BinarySearch(vector<int> arr, int target)
    {
        int lowIndex = 0, highIndex = arr.size() - 1;
        int midIndex = 0;

    	while (lowIndex <= highIndex) {
            midIndex = (lowIndex + highIndex) / 2;
            if (arr[midIndex] == target)
                return midIndex;
            else if (arr[midIndex] < target)
                lowIndex = midIndex + 1;
            else
                highIndex = midIndex - 1;
    	}
        return -1;
    }
};


int main()
{
    Solution Solution;
    int target = 0, index = 0;
    cout << "The sorted array is: 2, 3, 4, 5, 6, 7, 8, 9, 10 " << endl << "Please input the search number:" << endl;
    cin >> target;
    vector<int> arr = { 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    index = Solution.BinarySearch(arr, target);

    cout << "The index is: " << index << endl;

    return 0;

}
