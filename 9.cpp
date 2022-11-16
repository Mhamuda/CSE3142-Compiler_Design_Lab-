#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back

vector<string> PN = {"Sagor", "Selim", "Salma", "Nipu"};
vector<string> P = {"I", "you", "he", "she", "it", "we", "they"};
vector<string> N = {"book", "cow", "dog", "home", "grass", "rice", "mango"};
vector<string> V = {"read", "eat", "take", "run", "write"};

bool Checker(string s)
{
    ll i;
    bool flag = true;
    string word;
    vector<string> wrds;

    for (i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
            word += s[i];
        else
        {
            wrds.pb(word);
            word.clear();
        }
    }
    wrds.pb(word);

    if (wrds.size() > 3)
    {
        flag = false;
        return flag;
    }

    for (i = 0; i < wrds.size(); i++)
    {
        if (i == 0)
        {
            if (find(PN.begin(), PN.end(), wrds[i]) == PN.end() && find(P.begin(), P.end(), wrds[i]) == P.end())
            {
                flag = false;
                break;
            }
        }
        else if (i == 1)
        {
            if (find(V.begin(), V.end(), wrds[i]) == V.end())
            {
                flag = false;
                break;
            }
        }
        else
        {
            if (find(N.begin(), N.end(), wrds[i]) == N.end())
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    string s;
    getline(cin, s); // Input: I read book

    if (Checker(s))
        cout << "Valid";
    else
        cout << "Invalid";
}