// Problem :    Sequence Search À≥–Ú≤È’“
// Solution:    https://github.com/tjzhym/Algorithms-R.Sedgewick
// Author :     zhym (tjzhym)
// Date   :     2021-8-7


#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int SequenceSearch(vector<int> arr, int target)
    {
        for (int i=0; i<arr.size(); i++) {
            if (arr[i] == target)
                return i;
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
    index = Solution.SequenceSearch(arr, target);

    cout << "The index is: " << index << endl;

    return 0;

}
