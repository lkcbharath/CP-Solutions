#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, x, k;
    int count = 0;
    cin >> n;
    cin >> k;

    for (i = 0; i < n; i++)
    {
        cin >> x;

        if ((5 - x) >= k)
            count++;
    }
    count = count / 3;
    cout << count;

    return 0;
}
