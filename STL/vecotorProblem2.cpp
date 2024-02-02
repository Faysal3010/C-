// https://leetcode.com/problems/peak-index-in-a-mountain-array/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 2, 3, 1, 4};
    int i = max_element(v.begin(), v.end()) - v.begin();
    cout << i;
}