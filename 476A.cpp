#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, m, n, count;

    cin >> n;
    cin >> m;

    int min = 20001;

    for (i = 0; i <= (n / 2); i++)
    {
        j = n - (2 * i);
        count = i + j;
        if (count % m == 0 && min > count)
            min = count;
    }

    if (min == 20001)
        cout << "-1";
    else
        cout << min;

    return 0;
}