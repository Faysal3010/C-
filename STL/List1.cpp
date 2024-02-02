/*
insert()
advance()
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);

    for (auto it : li)
    {
        cout << it << ' ';
    }
    cout << endl;

    li.insert(li.begin(), 2, 4);
    for (auto it : li)
    {
        cout << it << ' ';
    }
    cout << endl;
//----------------------------------------------------------------
    list<int>::iterator it;
    it = li.begin();
    advance(it, 3);
    li.insert(it, 2, 2);
//----------------------------------------------------------------
    for (auto it : li)
    {
        cout << it << ' ';
    }
    cout << endl;
}