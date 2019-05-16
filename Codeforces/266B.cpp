#include <bits/stdc++.h>
using namespace std;

int main()
{

    // your code here
    int i, j, n, t;
    cin >> n;
    cin >> t;
    char line[n];
    for (i = 0; i < n; i++)
        cin >> line[i];

    for (i = 0; i < t; i++)
    {
        for (j = 0; j <= (n - 1); j++)
            if (line[j] == 'B' && line[j + 1] == 'G')
            {
                line[j] = 'G';
                line[j + 1] = 'B';
                j = j + 1;
            }
    }

    for (i = 0; i < n; i++)
    {
        cout << line[i];
    }

    return 0;
}
