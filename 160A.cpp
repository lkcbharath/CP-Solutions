#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int i, n;
    int count = 0;
    int sum = 0;
    int sibling = 0;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    for (i = (n - 1); i >= 0; i--)
    {
        if (sibling <= (sum / 2))
        {
            sibling += a[i];
            count++;
        }
        else
            break;
    }
    cout << count;
    return 0;
}