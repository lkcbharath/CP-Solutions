#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    long int L, v, l, r;
    long int no_lant;
    long int not_visible;

    cin >> t;

    while (t--)
    {
        cin >> L >> v >> l >> r;
        no_lant = (L / v);
        not_visible = (r / v) - (l / v);
        if (l % v == 0)
            ++not_visible;

        no_lant -= not_visible;
        cout << no_lant << endl;
    }
    return 0;
}