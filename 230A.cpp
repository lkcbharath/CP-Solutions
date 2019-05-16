#include <bits/stdc++.h>

using namespace std;

void sort_second(int dragon[][2], int n)
{
    auto ptr = (pair<int, int> *)dragon;
    sort(ptr, ptr + n);
}

int main()
{
    int s, n, i, j;
    int flag = 1;
    cin >> s;
    cin >> n;
    int dragon[n][2];

    for (i = 0; i < n; i++)
    {
        cin >> dragon[i][0];
        cin >> dragon[i][1];
    }

    sort_second(dragon, n);

    for (int i = 0; i < n; i++)
    {
        pair<int, int> z = *(((pair<int, int> *)dragon) + i);

        if (s > z.first)
        {
            s += z.second;
            flag = 0;
        }
        else
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
