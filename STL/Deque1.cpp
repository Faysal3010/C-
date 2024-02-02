// vector and dqueue same
// declaration
// push_front
// push_back
// print
// front
// back
// pop_front
// pop_back
// size
// empty
// clear
// erase
// insert
#include <bits/stdc++.h>
using namespace std;
int main()
{ // declaration----------------------------------------------------------------
    deque<int> dq = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    deque<int> dq1;
    dq1.push_back(1);
    dq1.push_back(2);
    dq1.push_back(3);
    // prit--------------------
    for (int it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    for (int it : dq1) // dq1
    {
        cout << it << " ";
    }
    cout << endl;
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq.at(i) << " ";
    }
    cout << endl;
    cout << "dq1 add front: ";
    dq1.push_front(9); // push front dq1
    for (int it : dq1) // dq1
    {
        cout << it << " ";
    }
    cout << endl;
    // size() ; front() ; back() ;------------------------
    cout << "dq1 size: " << dq1.size() << endl;
    cout << "dq1 front: " << dq1.front() << endl;
    cout << "dq1 last: " << dq1.back() << endl;
    // pop_back(); pop_front();------------------------------------------------
    dq.pop_back();  // remove from last queue
    dq.pop_front(); // remove from first queue
    for (int it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    // check empty -------------------------------------------------
    if (dq.empty())
    {
        cout << "Empty queue" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
    // erase -------------------------------------
    dq.erase(dq.begin() + 3); // erase 5
    cout << "dq erase1 size: " << dq.size() << endl;
    for (int it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    dq.erase(dq.begin(), dq.begin() + 3); // erase 5
    cout << "dq erase2 size: " << dq.size() << endl;
    for (int it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    dq.erase(dq.begin() + 1, dq.end()); // erase 6  to last element
    cout << "dq erase3 size: " << dq.size() << endl;
    for (int it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    // clear--------------------------------
    dq.clear();
    cout << "dq size: " << dq.size() << endl;
    for (int it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    // insert
    deque<int>::iterator it;
    it = dq.begin();
    dq.insert(it, 2, 3);
    cout << "dq size: " << dq.size() << endl;
    for (int it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    it = dq.begin()+2;
    dq.insert(it, 3, 5);
    cout << "dq size: " << dq.size() << endl;
    for (int it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
}