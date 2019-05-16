#include <bits/stdc++.h>
using namespace std;

int main()
{

    // your code here
    int i, j, k, n, flag = 0;

    long int v, x;

    cin >> n;
    cin >> v;

    int result[n];

    int count = 0;

    for (i = 0; i < n; i++)
    {
        result[i] = 0;
        flag = 0;
        cin >> k;

        for (j = 0; j < k; j++)
        {
            cin >> x;

            if (v > x)
                flag = 1;
        }

        if (flag)
        {
            result[count] = (i + 1);
            count++;
        }
    }
    cout << count << endl;

    for (i = 0; i < count; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}