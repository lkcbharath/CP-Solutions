#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define f(i, n) for (i = 0; i < n; ++i)

typedef long long int lld;
typedef long long ll;
typedef long int ld;
typedef double db;

typedef vector<int> vd;
typedef vector<long int> vld;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<pii> vii;

int main()
{
    int n, m, i;
    cin >> n >> m;
    string s1, s2;
    map<string, string> dict;
    f(i, m)
    {
        cin >> s1;
        cin >> s2;
        if (s1.size() > s2.size())
        {
            dict.insert(pair<string, string>(s1, s2));
            dict.insert(pair<string, string>(s2, s2));
        }
        else
        {
            dict.insert(pair<string, string>(s2, s1));
            dict.insert(pair<string, string>(s1, s1));
        }
    }

    string s3;
    string s4 = "";
    f(i, n)
    {
        cin >> s3;
        s4 += dict.find(s3)->second + " ";
    }
    cout << s4;

    return 0;
}