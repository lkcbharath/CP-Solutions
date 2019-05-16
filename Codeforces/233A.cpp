#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    int a[n + 1];
    int c;

    if (n % 2 == 1)
    {
        cout << "-1";
        return 0;
    }

    for (i = 1; i <= n; ++i)
    {
        a[i] = i;
    }

    for (i = 2; i <= n; (i = i + 2))
    {
        c = a[i];
        a[i] = a[i - 1];
        a[i - 1] = c;
    }

    for (i = 1; i <= n; ++i)
    {
        cout << a[i] << " ";
    }

    return 0;
}