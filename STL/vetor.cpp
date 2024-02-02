/*
vector declaration;
push_back();
how_to_print_vector_value;
size()
v[]-vs-at()
front();
back();
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

    // size of vector

    cout << "Size: " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // 1st value print jonne front() use hobe
    cout << "First value: " << v.front() << endl;

    // last value print jonne back() use hobe
    cout << "Last value: " << v.back() << endl;

    // how to print vector value same as array

    cout << v[0] << " " << v[1] << " " << v[2] << endl;

    // or

    cout << v.at(0) << " " << v.at(1) << " " << v.at(2) << endl;

    // benifit for at()

    cout << v[44] << endl; // it's not send warning also print junk value
    cout << v.at(44);      // it say warning std::out_of_range
}

// Size: 3
// 1 2 3
// First value: 1
// Last value: 3
// 1 2 3
// 1 2 3
// 16847764
// terminate called after throwing an instance of 'std::out_of_range'
//   what():  vector::_M_range_check: __n (which is 44) >= this->size() (which is 3)