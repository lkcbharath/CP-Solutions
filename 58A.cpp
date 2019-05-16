#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int i, j, k, n, flag = 1;
    j = 0;
    string test = "hello";
    string str;
    cin >> str;
    n = str.length();
    for (i = 0; i < n; i++)
    {

        if (str[i] == test[j])
            j++;
    }
    if (j == 5)
        printf("YES");
    else
        printf("NO");

    return 0;
}