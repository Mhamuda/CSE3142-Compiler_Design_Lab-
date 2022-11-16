#include "bits/stdc++.h"
using namespace std;
#define ll long long

int main()
{
    // freopen("1.input.txt", "r", stdin);
    // freopen("1.output.txt", "w", stdout);

    ll i,len,word=0,letter=0,digit=0,other=0;
    vector <char> letters, digits, others;
    string s;
    
    getline(cin, s);    //Md. Tareq Zaman, Part-3, 2011
    len = s.length();

    for(i=0;s[i];i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            letter++;
            letters.push_back(s[i]);

        }
        else if(s[i]>='0' && s[i]<='9')
        {
            digit++;
            digits.push_back(s[i]);
        }
        else
        {   
            if(s[i]==' ' || s[i]=='\t' || s[i]=='\n')
                word++;

            other++;
            others.push_back(s[i]);
        }
    }

    if(s[len-1]!=' ' && s[len-1]!='\t' && s[len-1]!='\n')
        word++;

    cout<<"Total number of words: "<<word<<"\n";
    cout<<"Total number of letters: "<<letter<<"\n";
    cout<<"Total number of digits: "<<digit<<"\n";
    cout<<"Total number of other characters: "<<other<<"\n";


    cout<<"\nLetters: ";
    for(i=0;i<letters.size();i++)
        cout<<letters[i]<<" ";
    
    cout<<"\nDigits: ";
    for(i=0;i<digits.size();i++)
        cout<<digits[i]<<" ";
    
    cout<<"\nOthers characters: ";
    for(i=0;i<others.size();i++)
        cout<<others[i]<<" ";

    return 0;
}
