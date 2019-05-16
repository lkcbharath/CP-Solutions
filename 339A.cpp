#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int i;
    int n = str.length();
    int a[n];
    for (i = 0; i < n; i++)
    {
        if (str[i] != 43)
        {
            a[i] = str[i];
            a[i] -= 48;
        }
        else
            a[i] = 43;
        ;
    }
    sort(a, a + n);
    for (i = 0; i < n / 2; i++)
    {
        printf("%d+", a[i]);
    }
    printf("%d", a[i]);
    return 0;
}