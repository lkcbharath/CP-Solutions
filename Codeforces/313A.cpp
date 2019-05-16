#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    long long int n, n1, max;
    cin >> n;
    max = n;
    int digit[10];
    int i = 0, z, r;
    if (n > -10)
        cout << n;

    else if (n <= -10)
    {

        n1 = abs(n);

        while (n1 != 0)
        {
            r = n1 % 10;
            n1 = n1 / 10;
            digit[i] = r;
            i++;
        }

        z = i; // digit count, remember to 0 index it

        if (i == 2 && digit[0] == 0)
        {
            cout << "0";
            exit(0);
        }

        cout << "-";

        if (digit[0] > digit[1])
        {
            for (i = (z - 1); i > 0; i--)
                cout << digit[i];
        }

        else
        {
            for (i = (z - 1); i > 1; i--)
                cout << digit[i];
            cout << digit[0];
        }
    }
    return 0;
}
