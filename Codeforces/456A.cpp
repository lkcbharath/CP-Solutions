#include <bits/stdc++.h>
using namespace std;

void sort_second(int a[][2], int n)
{
    auto ptr = (pair<int, int> *)a;
    sort(ptr, ptr + n);
}

int main()
{
    int n, i;
    int flag = 0;
    cin >> n;

    int a[n][2];

    for (i = 0; i < n; ++i)
    {
        cin >> a[i][0];
        cin >> a[i][1];
    }

    sort_second(a, n);

    for (int i = 1; i < n; i++)
    {
        pair<int, int> z1 = *(((pair<int, int> *)a) + i);
        pair<int, int> z2 = *(((pair<int, int> *)a) + (i - 1));
        if (z1.first > z2.first && z1.second < z2.second)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";

    return 0;
}