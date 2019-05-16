#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int i, n, x, y, z, n1 = 0, n2 = 0, n3 = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        n1 += x;
        n2 += y;
        n3 += z;
    }
    if (n1 == 0 && n2 == 0 && n3 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}