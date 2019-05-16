#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, count;
    char x = 'x';
    char o = 'o';
    cin >> n;

    if (n == 1)
    {
        printf("YES");
        return 0;
    }

    char a[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    }

    // 3 cases, corner, side, middle

    for (i = 0; i < n; ++i)
    {

        for (j = 0; j < n; ++j)
        {

            count = 0;

            if ((i - 1) >= 0)
                if (a[i - 1][j] == 'o')
                {
                    ++count;
                    // cout << count << "." << i << "." << j << "\n";
                }

            if ((i + 1) <= (n - 1))
                if (a[i + 1][j] == 'o')
                {
                    ++count;
                    // cout << count << "." << i << "." << j << "\n";
                }

            if ((j - 1) >= 0)
                if (a[i][j - 1] == 'o')
                {
                    ++count;
                    // cout << count << "." << i << "." << j << "\n";
                }

            if ((j + 1) <= (n - 1))
                if (a[i][j + 1] == 'o')
                {
                    ++count;
                    // cout << count << "." << i << "." << j << "\n";
                }

            // cout << count << endl;

            if (count % 2 == 1)
            {
                printf("NO");
                return 0;
            }
        }
    }

    printf("YES");
    return 0;
}