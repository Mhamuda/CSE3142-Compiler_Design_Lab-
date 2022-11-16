#include "bits/stdc++.h"
using namespace std;
#define ll long long

bool intVariable(string s)
{
    bool flag = true;
    char ch = tolower(s[0]);

    if (ch < 'i' || ch > 'n')
        flag = false;

    for (int i = 1; s[i]; i++)
    {
        ch = tolower(s[i]);

        if (ch >= 'a' && ch <= 'z')
            continue;
        else if (s[i] >= '0' && s[i] <= '9')
            continue;
        else
        {
            flag = false;
            break;
        }
    }

    return flag;
}

bool isNumber(string s)
{
    bool flag = true;

    if (s[0] < '1' || s[0] > '9')
        flag = false;

    for (int i = 1; s[i]; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            continue;
        else
        {
            flag = false;
            break;
        }
    }

    return flag;
}

int main()
{
    // freopen("4.input.txt", "r", stdin);
    // freopen("4.output.txt", "w", stdout);

    string s;
    cin >> s; // A1234 , 1234 , 00

    if (intVariable(s))
        cout << "Integer variable";
    else if (isNumber(s))
    {
        if (s.size() <= 4)
            cout << "ShortInt Number";
        else
            cout << "LongInt Number";
    }
    else
        cout << "Invalid Input or Undefined";

    return 0;
}