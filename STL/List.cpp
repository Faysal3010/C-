/*
list declarations
push_back()
push_front()
front()
back()
pop_front()
pop_back()
size()
clear()
empty()


*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;

    li.push_back(1);
    li.push_back(2);
    li.push_back(2);//last add hobe ekta ekta kore
    li.push_front(3);//fornt add hobe ekta ekta kore

    // list<int>::iterator it;
    // for (it = li.begin(); it != li.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    cout << endl;
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Size of list: " << li.size() << endl;
    cout << "first value: " << li.front() << endl;
    cout << "last value: " << li.back() << endl;
    if (li.empty())
    {
        cout << "Empty list";
    }
    else
    {
        cout << "Not Empty";
    }
    //----------------------------------------------------------------
    li.pop_front(); // remove first element
    li.pop_back();  // remove last element
    cout << endl<<endl;
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Size of list: " << li.size() << endl;
    cout << "first value: " << li.front() << endl;
    cout << "last value: " << li.back() << endl;

    //----------------------------------------------------------------
    cout << endl;
    li.clear();
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Size of list: " << li.size() << endl;
    cout << "first value: " << li.front() << endl;
    cout << "last value: " << li.back() << endl;
    if (li.empty())
    {
        cout << "Empty list";
    }
    else
    {
        cout << "Not empty";
    }
    cout << "\n\n";
}