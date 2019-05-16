#include <iostream>

using namespace std;

int main()
{
    int i, n;
    scanf("%d", &n);
    string str[n], str2[n];
    for (i = 0; i < n; i++)
    {
        cin >> str[i];
        if (str[i].length() > 10)
            str2[i] = str[i].front() + to_string(str[i].length() - 2) + str[i].back();
        else
            str2[i] = str[i];
    }
    for (i = 0; i < n; i++)
        cout << str2[i] << "\n";
}