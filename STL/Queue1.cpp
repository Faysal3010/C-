// FIFO
//  declaration
//  psuh
//  empty
//  size
//  front
//  back
//  pop
//  emplace
//  swap
// print

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declare----------------------------------------------------------------
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    // check empty----------------------------------------------------------------
    if (q.empty())
    {
        cout << "Empty queue" << endl;
    }
    else
    {
        cout << "Not empty queue" << endl;
    }
    // size----------------------------------------------------------------
    cout << "Size: " << q.size() << endl;
    // front() back()----------------------------------------------------------------
    cout << "First element: " << q.front() << endl;
    cout << "Last element: " << q.back() << endl;
    // swap()----------------------------------------------------------------
    queue<int> q1;
    q1.push(5);
    q1.push(9);
    q1.push(5);

    swap(q, q1);
    cout << "q First element: " << q.front() << endl;
    cout << "q1 First element: " << q1.front() << endl;

    // pop----------------------------------------------------------------
    q.pop();
    cout << "after pop q First element: " << q.front() << endl; // fifo

    // print fifo queue----------------------------------------------------------------
    while (!q.empty()) // not empty
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // or print ----------------------------------------------------------------
    /*

    while (q.size() > 0)
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    */
}