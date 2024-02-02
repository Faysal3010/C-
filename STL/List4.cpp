/*
remove()
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li = {2, 5, 9, 3, 4, 7, 6, 2, 3, 2};
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;

    li.remove(2);

    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    li.remove(3);
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
}