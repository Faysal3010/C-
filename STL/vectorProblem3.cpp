// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canMakeArithmeticProgression(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int d = arr[1] - arr[0];
        for (int i = 2; i < arr.size(); i++)
        {
            if (arr[i] - arr[i - 1] != d)
                return false;
        }
        return true;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    Solution solution;
    bool result = solution.canMakeArithmeticProgression(v);
    // Output the result
    if (result)
        cout << "The array forms an arithmetic progression." << endl;
    else
        cout << "The array does not form an arithmetic progression." << endl;

    return 0;
}