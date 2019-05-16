#include <bits/stdc++.h>
using namespace std;

long long int nc2(long long int n)
{

    if (n == 1)
        return 0;
    return ((n * (n - 1)) >> 1);
}

int main()
{
    int x;
    long long int i, rem, quot, n, m, sum1, sum2;
    uint64_t kmin, kmax;
    kmin = 0;
    kmax = 0;

    cin >> n;
    cin >> m;

    sum1 = nc2(n);

    if (m == 1)
    {
        cout << sum1 << " " << sum1;
        return 0;
    }

    if (n == m)
    {
        cout << "0 0";
        return 0;
    }
    rem = n % m;
    quot = n / m;

    sum1 = nc2(quot + 1);
    sum2 = nc2(quot);

    kmin += sum1 * (rem);
    kmin += sum2 * (m - rem);

    rem = n - (m - 1);

    kmax = nc2(rem);

    cout << kmin << " " << kmax;

    return 0;
}