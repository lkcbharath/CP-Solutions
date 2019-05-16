#include <bits/stdc++.h>
using namespace std;
#define lld long long int
#define ll long long

int main()
{
    lld k, i, j = 0, x, n, count = 0, temp = 0, arr_sum = 0;
    cin >> n;
    cin >> k;
    lld arr[n];
    lld subset[n];
    for (i = 0; i < n; ++i)
    {
        scanf("%lld", &arr[i]);
        arr_sum = arr_sum + arr[i];
    }

    if (n < k || arr_sum % k != 0)
    {
        cout << "No";
        return 0;
    }

    arr_sum = arr_sum / k;

    for (i = 0; i < n; ++i)
    {
        temp += arr[i];
        ++count;
        if (temp > arr_sum)
        {
            cout << "No";
            return 0;
        }
        if (temp == arr_sum)
        {
            subset[j] = count;
            ++j;
            count = 0;
            temp = 0;
        }
    }
    cout << "Yes\n";
    n = j;
    for (j = 0; j < n; ++j)
        cout << subset[j] << " ";
    // arr_sum = arr_sum/n;
}
