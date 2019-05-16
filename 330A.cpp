#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, k, r, c;
    int count = 0;
    int countx = 0;
    cin >> r;
    cin >> c;

    char a[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            count++;

            if (a[i][j] == 'S')
            {
                count = count - (j + 1);
                for (k = 0; k < j; k++)
                    a[i][k] = '.';
                break;
            }

            a[i][j] = 'x';
        }
    }

    //debug

    // cout << count << ".\n";

    // for (i=0;i<r;i++) {
    // 	for (j=0;j<c;j++) {
    // 		cout << a[i][j] << " ";
    // 	}
    // 	cout << "\n";
    // }
    // cout << ".\n";

    for (j = 0; j < c; j++)
    {

        countx = 0;
        for (i = 0; i < r; i++)
        {

            if (a[i][j] != 'x')
                count++;

            else
                countx++;

            if (a[i][j] == 'S')
            {
                count = count - (i + 1);
                count = count + countx;

                break;
            }

            a[i][j] = 'x';
        }
    }

    cout << count;

    return 0;
}
