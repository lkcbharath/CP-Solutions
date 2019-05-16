#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    long long int n, x;
    cin >> n;
    cin >> x;

    if (x <= ((n / 2) + (n % 2)))

        cout << (x * 2) - (1);
    else

        cout << (x * 2) - n - n % 2;

    return 0;
}
