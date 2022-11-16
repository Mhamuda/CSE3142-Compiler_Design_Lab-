#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back

bool isKeyword(string s)
{
    bool flag = false;
    vector<string> keyWords = {
        "auto",
        "break",
        "case",
        "char",
        "const",
        "continue",
        "default",
        "do",
        "double",
        "else",
        "enum",
        "extern",
        "false",
        "float",
        "for",
        "goto",
        "if",
        "int",
        "long",
        "register",
        "return",
        "short",
        "signed",
        "sizeof",
        "static",
        "struct",
        "switch",
        "true",
        "typedef",
        "union",
        "unsigned",
        "void",
        "volatile",
        "while",
    };

    for (auto x : keyWords)
    {
        if (x == s)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

bool isOperator(string s)
{
    bool flag = false;
    vector<string> operators = {"+", "-", "*", "/", "%", "=", "==", "!=", ">", "<", ">=", "<=", "++", "--", "&&", "||", "!"};

    for (auto x : operators)
    {
        if (x == s)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

bool isIdentifier(string s)
{
    bool flag = false;

    if (s[0] == '_' || isalpha(s[0]))
    {
        flag = true;

        for (ll i = 1; s[i]; i++)
        {
            if (!isalpha(s[i]) && s[i] != '_')
            {
                flag = false;
                break;
            }
            else
                continue;
        }
    }

    return flag;
}

bool isConstant(string s)
{
    bool flag = false;

    if (s[0] == '"' && s[s.size() - 1] == '"')
    {
        flag = true;
        return flag;
    }

    for (ll i = 0; s[i]; i++)
    {
        if (isdigit(s[i]) || s[i] == '.')
            flag = true;
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
    // freopen("7.input.txt", "r", stdin);
    // freopen("7.output.txt", "w", stdout);

    string s;
    cin >> s; // 4 ,auto ,+ ,a

    if (isKeyword(s))
        cout << "Keyword";
    else if (isOperator(s))
        cout << "Operator";
    else if (isIdentifier(s))
        cout << "Identifier";
    else if (isConstant(s))
        cout << "Constant";
    else
        cout << "Invalid";

    cout << "\n";
    return 0;
}