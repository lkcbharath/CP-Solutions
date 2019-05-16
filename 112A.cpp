#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int lexo = 0;
    string str1, str2;
    cin >> str1;
    cin >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] > str2[i])
        {
            lexo = 1;
            break;
        }

        else if (str1[i] < str2[i])
        {
            lexo = -1;
            break;
        }
    }
    cout << lexo;
    return 0;
}