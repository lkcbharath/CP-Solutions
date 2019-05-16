#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int n, i, j, k, x;
    scanf("%d", &n);

    int report[n];
    int result[n];
    int count[n];

    for (i = 0; i < n; i++)
    {
        cin >> x;
        report[i] = (x - 1);
        count[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        count[i] += 1;

        k = report[i]; //initial checks
        count[k] += 1;

        while (count[k] < 2)
        {
            k = report[k]; //when one of the originals is encountered
            count[k] += 1;
        }

        cout << (k + 1) << " ";

        for (j = 0; j < n; j++) //reset counter
            count[j] = 0;
    }
    return 0;
}
