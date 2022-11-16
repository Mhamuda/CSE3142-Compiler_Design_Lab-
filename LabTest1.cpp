/*
Write a program to find out vowel word,consonant word and palindrome word
from a paragraph with its column number and line number.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main()
{
    freopen("testInput.txt", "r", stdin);
    freopen("testOutput.txt", "w", stdout);

    string s;
    ll line = 0;

    while (getline(cin, s))
    {
        // cout << s << endl;
        line++;
        ll columnNo = 0;

        cout << "Line no = " << line << " : "
             << "\n";

        for (ll i = 0; s[i]; i++)
        {
            string str, t;
            ll j = 0;
            while (1)
            {
                if (s[i] == ' ')
                {
                    break;
                }
                else if ((s[i] == '\n' && i != s.size()) || s[i] == '\0')
                {
                    // line++;
                    j = 0;
                    // cout << "Line no = " << line << " : "
                    //  << "\n";
                    break;
                }
                else
                {
                    // if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                    //{
                    if (!j)
                        columnNo = i + 1;
                    str += s[i];
                    // }
                    i++;
                    j++;
                }
            }
            t = str;
            reverse(t.begin(), t.end());

            if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u' || str[0] == 'A' || str[0] == 'E' || str[0] == 'I' || str[0] == 'O' || str[0] == 'U')
            {
                cout << "Column no = " << columnNo << " " << str << " = Vowel Word"
                     << "\n";
            }
            else
            {
                cout << "Column no = " << columnNo << " " << str << " = Consonant Word"
                     << "\n";
            }

            if (str == t)
                cout << "Column no = " << columnNo << " " << str << " = Palindrome Word"
                     << "\n";

            str.clear();
        }
    }

    return 0;
}
