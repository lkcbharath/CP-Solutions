#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int i;
    char str[1000];
    scanf("%[^\n]s", str);
    int a[26];
    int count = 0;

    for (i = 0; i < 26; i++)
        a[i] = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            a[(str[i] - 97)] = 1;
    }

    for (i = 0; i < 26; i++)
    {
        if (a[i] == 1)
            count++;
    }

    cout << count;

    return 0;
}
