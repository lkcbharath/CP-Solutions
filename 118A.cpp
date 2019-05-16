#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    str = "";
    char c;
    scanf("%c", &c);
    c = tolower(c);
    while (c >= 97 && c <= 122)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            str += '.';
            str += c;
        }
        scanf("%c", &c);
        c = tolower(c);
    }

    cout << str;
    return 0;
}