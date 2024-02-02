/*
multiple erase()
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
    list<int>::iterator it, it2;
    it = li.begin();
    it2 = li.begin();
    advance(it2, 3);
    li.erase(it, it2);
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
}