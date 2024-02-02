#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    vector<int> a1 = {2, 3, 4};
    vector<int> a2 = {3, 6, 9, 7};
    v.push_back(a1);
    v.push_back(a2);

    for (auto u : v)
    {
        for (auto i : u)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}