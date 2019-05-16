#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b, c, max, value[6];
    scanf("%d%d%d", &a, &b, &c);

    value[0] = a + b + c;
    value[1] = (a + b) * c;
    value[2] = (a * b) + c;
    value[3] = a + (b * c);
    value[4] = a * (b + c);
    value[5] = a * b * c;

    max = value[5];

    for (int i = 0; i < 6; i++)
    {
        if (max < value[i])
            max = value[i];
    }

    cout << max;

    return 0;
}