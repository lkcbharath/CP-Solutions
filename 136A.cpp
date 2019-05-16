#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

    int i, n, j = 1;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        if (j == a[i])
        {
            cout << (i + 1) << " ";
            j++;
            i = -1;
        }
    }
    return 0;
}