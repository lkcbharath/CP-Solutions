#include <bits/stdc++.h>
using namespace std;

int biggest(int x, int y, int z)
{
    int c = 0;
    if (x >= y && x >= z)
        c = x;
    else if (y >= x && y >= z)
        c = y;
    else if (z >= x && z >= y)
        c = z;
    return c;
}

int main()
{
    int n, i, x;
    cin >> n;
    int a[3];
    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        a[i % 3] += x;
    }
    int result = biggest(a[0], a[1], a[2]);

    if (result == a[0])
        cout << "chest";
    else if (result == a[1])
        cout << "biceps";
    else
        cout << "back";

    return 0;
}