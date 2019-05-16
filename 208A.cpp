#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int n, i;
    int flag = 0;
    string str;
    string str2 = "";
    cin >> str;
    n = str.length();
    for (i = 0; i < n; i++)
    {
        if (str.substr(i, 3) == "WUB")
        {
            if (flag == 1)
            {
                str2 += ' ';
                flag = 0;
            }

            if ((i + 3) <= n)
                i += 2;

            continue;
        }
        else
        {
            str2 += str[i];
            flag = 1;

            if (i == (n - 1))
                str2 += ' ';
        }
    }
    cout << str2;

    return 0;
}