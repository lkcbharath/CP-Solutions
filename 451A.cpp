#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int n1, n2, min;
    scanf("%d%d", &n1, &n2);
    (n1 < n2) ? min = n1 : min = n2;
    if (min % 2 == 1)
        printf("Akshat");
    else
        printf("Malvika");
    return 0;
}