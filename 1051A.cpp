#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, t;
    string str;
    int nl = 0;
    int nu = 0;
    int nm = 0;
    cin >> t;
    while (t--)
    {

        cin >> str;
        n = str.length();

        nl = -1;
        nu = -1;
        nm = -1;
        for (i = 0; i < n; i++)
        {

            if (isupper(str[i]))
            {
                nu = i;
            }
            else if (islower(str[i]))
            {
                nl = i;
            }
            else if (isdigit(str[i]))
            {
                nm = i;
            }

            if ((nm >= 0) && (nu >= 0) && (nl >= 0))
            {
                break;
            }
        }

        if ((nm >= 0) && (nu >= 0) && (nl >= 0))
        {
            cout << str << "\n";
            continue;
        }

        if (nm > 0 && nu > 0)
        {
            str[0] = 'a';
            cout << str << "\n";
            continue;
        }
        if (nm > 0 && nl > 0)
        {
            str[0] = 'A';
            cout << str << "\n";
            continue;
        }
        if (nl > 0 && nu > 0)
        {
            str[0] = '0';
            cout << str << "\n";
            continue;
        }

        if (nl > -1 && nu > -1)
        {
            for (i = 1; i <= n; ++i)
            {
                if (nl != i && nu != i)
                {
                    nm = i;
                    break;
                }
            }
            str[nm] = '0';
            cout << str << "\n";
            continue;
        }
        if (nm > -1 && nu > -1)
        {
            for (i = 1; i <= n; ++i)
            {
                if (nm != i && nu != i)
                {
                    nl = i;
                    break;
                }
            }
            str[nl] = 'a';
            cout << str << "\n";
            continue;
        }
        if (nm > -1 && nl > -1)
        {
            for (i = 1; i <= n; ++i)
            {
                if (nm != i && nl != i)
                {
                    nu = i;
                    break;
                }
            }
            str[nu] = 'A';
            cout << str << "\n";
            continue;
        }

        if (nm > 1)
        {
            str[0] = 'a';
            str[1] = 'A';
            cout << str << "\n";
            continue;
        }
        if (nl > 1)
        {
            str[0] = 'A';
            str[1] = '0';
            cout << str << "\n";
            continue;
        }
        if (nu > 1)
        {
            str[0] = '0';
            str[1] = 'a';
            cout << str << "\n";
            continue;
        }
    }
    return 0;
}