#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back

map<string, string> rules = {
    {"S+S", "S"},
    {"S*S", "S"}};

int main()
{   
    // freopen("10.input.txt", "r", stdin);
    // freopen("10.output.txt", "w", stdout);

    ll i;
    string s, ex, input;
    cin >> input; // input string: id+id*id

    for (i = 0; input[i]; i++)
    {
        if (input[i] == 'i' && input[i + 1] == 'd')
        {
            ex.push_back('x');
            i++;
        }
        else
            ex.push_back(input[i]);
    }

    for (i = 0; ex[i]; i++)
    {
        s += ex[i];

        if (s.back() == 'x')
            s.back() = 'S';

        if (rules.find(s) != rules.end())
            s = rules[s];

        if (i == ex.size() - 1 && s == "S")
        {
            cout << "Accepted"
                 << "\n";
            return 0;
        }
    }

    cout << "Rejected"
         << "\n";
    return 0;
}

/*

#include <bits/stdc++.h>
using namespace std;
vector<char> stk;

int main()
{
    //
    // Production Rules for this problem:
    //     E -> 2E2
    //     E -> 3E3
    //     E -> 4
    //

    freopen("in10.txt", "r", stdin);
    string input;
    getline(cin, input);
    cout << "Given input : " << input << endl;

    for (int i = 0; i < input.size(); i++)
    {
        stk.push_back(input[i]);

        if (stk[stk.size() - 1] == '4')
        {
            stk.pop_back();
            stk.push_back('E');
        }
        else if (stk[stk.size() - 1] == '2')
        {
            int n = stk.size() - 1;
            if (stk[n - 1] == 'E' && stk[n - 2] == '2')
            {
                stk.pop_back();
                stk.pop_back();
                stk.pop_back();
                stk.push_back('E');
            }
        }
        else if (stk[stk.size() - 1] == '3')
        {
            int n = stk.size() - 1;
            if (stk[n - 1] == 'E' && stk[n - 2] == '3')
            {
                stk.pop_back();
                stk.pop_back();
                stk.pop_back();
                stk.push_back('E');
            }
        }
    }

    if (stk.size() == 1 && stk[0] == 'E')
        cout << "Accepted" << "\n";
    else
        cout << "Rejected" << "\n";
}
*/