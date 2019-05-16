#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, x;
    int count[4];
    count[0] = 0;
    count[2] = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {

        cin >> x;

        if (x % 2 == 0)
        {
            count[0]++;
            count[1] = (i + 1);
        }
        else
        {
            count[2]++;
            count[3] = (i + 1);
        }
    }

    if (count[0] == 1)
        cout << count[1];

    else if (count[2] == 1)
        cout << count[3];

    return 0;
}
