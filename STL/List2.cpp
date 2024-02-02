/*
erase()
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li = {2, 5, 9, 3, 4, 7, 6};
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    list<int>::iterator it;
    it = li.begin();
    advance(it, 3);
    li.erase(it);
    for (auto it : li)
    {
        cout << it << " ";
    }
}