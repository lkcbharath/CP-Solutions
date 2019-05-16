#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c, i, prev, curr;
    cin >> n;
    cin >> c;
    prev = 0;
    curr = 0;
    int profit = 0;

    for (i = 0; i < n; ++i)
    {
        prev = curr;
        cin >> curr;
        if (profit < ((prev - curr) - c))
            profit = ((prev - curr) - c);
    }
    cout << profit;
    return 0;
}