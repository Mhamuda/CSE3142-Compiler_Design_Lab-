#include "bits/stdc++.h"
using namespace std;
#define ll long long

bool floatVariable(string s)
{
    bool flag = true;
    char ch = tolower(s[0]);

    if ((ch > 'h' && ch < 'o') || (ch < 'a' || ch > 'z'))
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

ll isNumber1(string s)
{
    ll cnt = 0;
    bool flag = true;

    for (ll i = 2; s[i]; i++)
    {
        if (isdigit(s[i]))
            cnt++;
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
        return cnt;
    else
        return -1;
}

ll isNumber2(string s)
{
    ll cnt = 0;
    bool flag = true;

    for (ll i = 3; s[i]; i++)
    {
        if (isdigit(s[i]))
            cnt++;
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
        return cnt;
    else
        return -1;
}

int main()
{
    // freopen("5.input.txt", "r", stdin);
    // freopen("5.output.txt", "w", stdout);

    string s;
    cin >> s; // 100.00, 000, 100.00e+00, 0.00, a1234, ijk

    if (floatVariable(s))
        cout << "Float Variable";
    else if (s[0] == '0' && s[1] == '.')
    {
        if (isNumber1(s) > 2)
            cout << "Double Variable";
        else if (isNumber1(s) == 2)
            cout << "Float Variable";
        else
            cout << "Invalid Input or Undefined";
    }
    else if (s[0] >= '1' && s[0] <= '9' && s[1] >= '0' && s[1] <= '9' && s[2] == '.')
    {
        if (isNumber2(s) > 2)
            cout << "Double Variable";
        else if (isNumber2(s) == 2)
            cout << "Float Variable";
        else
            cout << "Invalid Input or Undefined";
    }
    else
        cout << "Invalid Input or Undefined";

    return 0;
}