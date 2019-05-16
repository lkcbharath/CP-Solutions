#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

    int i, j, n, n2, flag = 0;
    cin >> n;

    if (n % 4 && n % 7 && n % 44 && n % 47 && n % 74 && n % 77 && n % 444 && n % 447 && n % 474 && n % 477 && n % 744 && n % 747 && n % 774 && n % 777)
        flag = 1;
    else
        flag = 0;

    if (flag == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}