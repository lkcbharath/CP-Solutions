#include <bits/stdc++.h>
using namespace std;

int main()
{
    uint64_t l, r, i;
    cin >> l;
    cin >> r;
    uint64_t minlines = ((r - l + 1));
    minlines = minlines >> 1;
    cout << "YES"
         << "\n";
    while ((l + 1) <= r)
    {
        cout << l << " " << l + 1 << "\n";
        l = l + 2;
    }
    return 0;
}