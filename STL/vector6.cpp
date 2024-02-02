// resize
// print iterator way
// sort
// greater<int>()
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    cout << v.size() << endl;

    v.resize(10);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    vector<int> v1(10, 5);
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    // iterator------------------------------------------------
    // address onojai call hobe, jokhon end pabe end() function okhane stop hobe
    vector<int>::iterator it;
    for (it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (int fx : v)
    {
        cout << fx << " ";
    }
    cout << endl;
    for (int fx : v)
    {
        fx += 2;
        cout << fx << " ";
    }
    cout << endl;

    // sort----------------------------------------------------------------
    sort(v.begin() + 2, v.end()); // 4 por theke sort hobe  //v.begin()+1,v.begin()+3  //O(nlog2(n))
    for (int fx : v)
    {
        fx += 2;
        cout << fx << " ";
    }
    cout << endl;

    // boro theke choto
    sort(v.rbegin(), v.rend());
    for (int fx : v)
    {
        cout << fx << " ";
    }
    cout << endl;

    // or
    sort(v.begin(), v.end(), greater<int>());
    for (int fx : v)
    {
        cout << fx << " ";
    }
    cout << endl;

}