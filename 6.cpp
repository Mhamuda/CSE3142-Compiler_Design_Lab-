#include "bits/stdc++.h"
using namespace std;
#define ll long long

bool isVariable(string s)
{
    bool flag = true;

    if ((s[3] >= 'a' && s[3] <= 'z') || (s[3] >= 'A' && s[3] <= 'Z') || (s[3] >= '0' && s[3] <= '9'))
    {
        for (ll i = 4; s[i]; i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
                continue;
            else
            {
                flag = false;
                break;
            }
        }
    }
    else
        flag = false;

    return flag;
}

bool isBinary(string s)
{
    bool flag = true;

    if (s[0] != '0')
        flag = false;

    if (s[1] != '0' && s[1] != '1')
        flag = false;

    for (ll i = 2; s[i]; i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            flag = false;
            break;
        }
    }

    return flag;
}

int main()
{
    // freopen("6.input.txt", "r", stdin);
    // freopen("6.output.txt", "w", stdout);

    ll i;
    string s;
    cin >> s; // 000 ,bn_101 , ch_abx, ch_010a

    if (s[0] == 'c' && s[1] == 'h' && s[2] == '_')
    {
        if (isVariable(s))
            cout << "Character Variable";
        else
            cout << "Invalid input or Undefined";
    }
    else if (s[0] == 'b' && s[1] == 'n' && s[2] == '_')
    {
        if (isVariable(s))
            cout << "Binary Variable";
        else
            cout << "Invalid input or Undefined";
    }
    else if (isBinary(s) && s.length() >= 2)
        cout << "Binary Number";
    else
        cout << "Invalid input or Undefined";

    return 0;
}