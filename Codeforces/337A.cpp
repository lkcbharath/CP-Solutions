#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int i, n, m, min;
    scanf("%d %d", &n, &m);
    int a[m];
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);
    sort(a, a + m);

    // for (i=0;i<m;i++)
    // 	printf("%d ",a[i]);
    // printf("\n");

    min = a[n - 1] - a[0];

    for (i = 1; i < (m - n + 1); i++)
    {
        if (min > a[i + n - 1] - a[i])
            min = a[i + n - 1] - a[i];
        // cout << min << "\n";
    }

    cout << min;

    return 0;
}