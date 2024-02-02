#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> num;

    for (int i = 0; i < 10; i++)
    {
        num.push_back(i);
    }
    //----------------------------------------------------------------
    for (int number : num)
    {
        cout << num[number] << endl;
        cout << number << endl;
    }
    cout << endl;
    //----------------------------------------------------------------
    for (auto it = num.begin(); it != num.end(); it++)
    {
        cout << "Value: " << *it << endl;
        cout << "Address of iterator: " << &it << endl;
        cout << "value address: " << &(*it) << endl;
    }
}