#include <bits/stdc++.h>

using namespace std;

void output(int l, char c);

int main()
{
    int i, l, h, x;
    cin >> h;
    cin >> l;

    for (i = 0; i < h; i++)
    {
        x = i % 4;
        switch (x)
        {
        case 0:
            output(l, '#');
            printf("\n");
            break;
        case 1:
            output((l - 1), '.');
            printf("#\n");
            break;
        case 2:
            output(l, '#');
            printf("\n");
            break;
        case 3:
            printf("#");
            output((l - 1), '.');
            printf("\n");
            break;
        default:
            continue;
        }
    }

    return 0;
}

void output(int l, char c)
{
    for (int i = 0; i < l; i++)
    {
        cout << c;
    }
}
