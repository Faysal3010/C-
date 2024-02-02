// print maximum element
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 5, 5, 7, 7, 1};

    vector<int>::iterator it = max_element(v.begin(), v.end());
    cout << *it << endl;

    vector<int>::iterator it1 = max_element(v.begin() + 1, v.begin() + 4);
    cout << *it1 << endl;

    // or----------------------------------------------------------------
    int n = max_element(v.begin(), v.end()) - v.begin();
    cout << "Index: " << n << " , "
         << "element: " << v[n] << endl;
}