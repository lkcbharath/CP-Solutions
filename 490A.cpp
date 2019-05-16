#include <bits/stdc++.h>

using namespace std;

int smallest(int x, int y, int z)
{
    return std::min({x, y, z});
}

int main()
{
    int i, j, k, l, n, min;
    int count[3];
    for (i = 0; i < 3; i++)
        count[i] = 0;
    cin >> n;
    int stud[n];
    for (i = 0; i < n; i++)
    {
        cin >> stud[i];
        switch (stud[i])
        {
        case 1:
            count[0]++;
            break;
        case 2:
            count[1]++;
            break;
        case 3:
            count[2]++;
            break;
        default:
            exit(0);
        }
    }

    min = smallest(count[0], count[1], count[2]);

    if (min == 0)
    {
        cout << "0";
        exit(0);
    } //else

    int one[count[0]];
    int two[count[1]];
    int three[count[2]];

    j = 0;
    k = 0;
    l = 0;

    for (i = 0; i < n; i++)
    {
        switch (stud[i])
        {
        case 1:
            one[j] = (i + 1);
            j++;
            break;
        case 2:
            two[k] = (i + 1);
            k++;
            break;
        case 3:
            three[l] = (i + 1);
            l++;
            break;
        default:
            exit(0);
        }
    }

    cout << min << "\n";

    for (i = 0; i < min; i++)
        cout << one[i] << " " << two[i] << " " << three[i] << "\n";

    return 0;
}
