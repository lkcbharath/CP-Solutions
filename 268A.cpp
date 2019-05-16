#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int n, i, j;
    int count = 0;
    scanf("%d", &n);
    int home[n];
    int away[n];
    for (i = 0; i < n; i++)
        scanf("%d %d", &home[i], &away[i]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (home[i] == away[j])
                count++;
        }
    }
    cout << count;
    return 0;
}