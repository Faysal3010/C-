/*
https://codeforces.com/problemset/problem/381/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int s = 0, d = 0, f1 = 0;
    while (not v.empty())
    {
        if (f1 == 0)
        {
            if (v[0] > v.back())
            {
                s += v[0];
                v.erase(v.begin());
            }
            else
            {
                s += v.back();
                v.pop_back();
            }
            f1 = 1;
        }
        else
        {
            if (v[0] > v.back())
            {
                d += v[0];
                v.erase(v.begin());
            }
            else
            {
                d += v.back();
                v.pop_back();
            }
            f1 = 0;
        }
    }
    cout << s << " " << d << endl;
    return 0;
}