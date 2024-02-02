// reverse()
// sort()
// unique()
// swap()
// merge()

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li = {2, 8, 9, 6, 3, 4, 7, 8, 9};
    list<int> li1 = {2, 5, 9, 0, 2, 3, 1, 4, 7};
    cout << "primary li:\n\t ";
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Reverse: ";
    li.reverse();
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    li.sort();
    cout << "Sort:\t ";
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    li.unique();
    cout << "unique:\t ";
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    // swap--------------------------------
    cout << "li:\t ";
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "li1:\t ";
    for (auto it : li1)
    {
        cout << it << " ";
    }
    cout << endl;
    li.swap(li1);
    cout << "li:\t ";
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "li1:\t ";
    for (auto it : li1)
    {
        cout << it << " ";
    }
    cout << endl;
    // merge()--------------------------------
    li.merge(li1);
    cout << "(li.merge(li1)):\n\t ";
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    cout <<"Size  li:\t" <<li.size() << endl;
    cout << "Size li1:\t"<<li1.size() << endl;
}