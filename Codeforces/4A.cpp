#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 2 && n % 2 == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}