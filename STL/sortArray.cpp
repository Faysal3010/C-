#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 5, 2, 8, 5, 9};
    sort(a, a + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
}