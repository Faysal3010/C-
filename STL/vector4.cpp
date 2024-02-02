/*
sort()
reverse()
iteration()
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    v1.push_back(100);
    v1.push_back(20);
    v1.push_back(300);
    cout << "Before: " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    // sort
    sort(v1.begin(), v1.end());

    cout << "After sort: " << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    // reverse
    cout << "reverse: " << endl;
    reverse(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << "iterator: " << endl;
    // iterator
    vector<int>::iterator it;
    it = v1.begin() + 1;
    cout << *it << endl;
}