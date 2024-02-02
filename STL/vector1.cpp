/*
clear()
empty()
pop_back()
erase()
begin()
end()

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector কোনও সাইজ declarations লাগে না।

    vector<int> v; // vector declarations

    // push_back vector মান গুলা রাখব।
    v.push_back(1); // v[0]
    v.push_back(2); // v[1]
    v.push_back(3); // v[2]
    v.push_back(4); // v[3]
    v.push_back(5); // v[4]

    // size of vector

    cout << "Size: " << v.size() << endl;
    // vector check korbe khali ase ki na
    if (v.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // vector last value remove jonne pop_back();
    v.pop_back();
    cout << "Size: " << v.size() << endl;
    cout << "remove last value: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // v.erase(v.begin(), v.end());
    v.erase(v.begin() + 3, v.end()); // from v[3] to last "end()"
    cout << "Remove 4,v[4] : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.erase(v.begin() + 0);
    cout << "Remove v[0] : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // clear the vector
    v.clear();
    cout << "Size: " << v.size() << endl;
    // vector check korbe khali ase ki na
    if (v.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty " << endl;
    }
}



// Size: 5
// Not Empty
// 1 2 3 4 5
// Size: 4
// remove last value: 1 2 3 4
// Remove 4,v[4] : 1 2 3
// Remove v[0] : 2 3
// Size: 0
// Empty