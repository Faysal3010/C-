/*
insert()
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // insert value
    v.insert(v.begin() + 1, 50);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.insert(v.begin() + 1, 3, 1);
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;
}