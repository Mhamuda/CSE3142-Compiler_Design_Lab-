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

bool isother(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '_' || str[i] == '.')
            continue;
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            continue;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int number(string str)
{
    int cn = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
        {
            cn++;
        }
        else if (!isdigit(str[i]))
        {
            return -1;
        }
    }
    if (cn == 1)
        return 2;
    if (cn == 0)
        return 1;
    return 0;
}

bool isarithmetic(string ch)
{
    if (ch == "+" || ch == "-" || ch == "*" || ch == "/" || ch == "%" || ch == "^" || ch == "=")
        return 1;
    return 0;
}

bool isrelational(string st)
{
    if (st == "<" || st == ">" || st == "!=" || st == "==" || st == "<=" || st == ">=")
        return 1;
    return 0;
}

int main()
{
    // freopen("8.input.txt","r",stdin);
    // freopen("8.output.txt","w",stdout);

    string s;
    cin >> s;

    if (isother(s) && !isarithmetic(s) && !isrelational(s))
        cout << "Undefined";
    else if (isKeyword(s))
        cout << "Keyword";
    else if (s[0] == '_' || isalpha(s[0]))
        cout << "Identifier";
    else if (isarithmetic(s))
        cout << "Arithmetic Operator";
    else if (isrelational(s))
        cout << "Relational Operator";
    else
    {
        ll x = number(s);
        if (x == -1)
            cout << "Undefined";
        else if (x == 1)
            cout << "Integer";
        else if (x == 2)
            cout << "Float";
        else
            cout << "Undefined";
    }

    return 0;
}