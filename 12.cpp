#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back

string input;

bool operatorChecker()
{
    ll n = input.size() - 1;

    if (input[0] == '+' || input[0] == '-' || input[0] == '*' || input[0] == '/' || input[n] == '+' || input[n] == '-' || input[n] == '*' || input[n] == '/')
        return false;

    for (ll i = 1; input[i]; i++)
    {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/')
        {
            if (input[i - 1] == '+' || input[i - 1] == '-' || input[i - 1] == '*' || input[i - 1] == '/' || input[i - 1] == '(')
                return false;
        }

        if (input[i - 1] == '+' || input[i - 1] == '-' || input[i - 1] == '*' || input[i - 1] == '/')
        {
            if (input[i] == ')')
                return false;
        }
    }

    return true;
}

bool bracketChecker()
{
    stack<char> stk;

    for (ll i = 0; input[i]; i++)
    {
        if (input[i] == '(')
            stk.push(input[i]);
        else if (input[i] == ')')
        {
            if (stk.empty())
                return false;
            else
                stk.pop();
        }
    }

    if (stk.empty())
        return true;
    else
        return false;
}

int main()
{
    // freopen("12.input.txt", "r", stdin);
    // freopen("12.output.txt", "w", stdout);

    cin >> input; // input string: (5*2+70)+2*(4*5)

    if (operatorChecker() && bracketChecker())
        cout << "Valid Expression"
             << "\n";
    else
        cout << "Invalid Expression"
             << "\n";

    return 0;
}