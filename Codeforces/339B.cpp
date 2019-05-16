#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, work;
    cin >> n;
    cin >> m;
    uint64_t time = 0;
    int pos = 1;

    for (int i = 0; i < m; ++i)
    {
        cin >> work;
        if (work >= pos)
            time += (work - pos);
        else
            time += (n - (pos - work));

        pos = work;
    }

    cout << time;
    return 0;
}