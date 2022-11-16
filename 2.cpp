#include"bits/stdc++.h"
using namespace std;
#define ll long long

int main()
{
    // freopen("2.input.txt", "r", stdin);
    // freopen("2.output.txt", "w", stdout);

    ll i,vow=0,cons=0;
    string s,wrd;
    vector<bool>smallLetter(26,false), capitalLetter(26,false);
    vector<char>vowel,consonant;
    vector<string>vowelWords,consonantWords;

    getline(cin,s); //Munmun is the student of Computer Science & Engineering

    for(i=0;s[i];i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {   
            vow++;
            if(s[i]>='a' && s[i]<='z')
            {
                if(smallLetter[s[i]-'a']==false)
                {
                    vowel.push_back(s[i]);
                    smallLetter[s[i]-'a']=true;
                    capitalLetter[s[i]-'a']=true;
                }
            }
            else
            {
                if(capitalLetter[s[i]-'A']==false)
                {
                    vowel.push_back(s[i]);
                    smallLetter[s[i]-'A']=true;
                    capitalLetter[s[i]-'A']=true;
                }
            }
        }
        else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            cons++;
            if(s[i]>='a' && s[i]<='z')
            {
                if(smallLetter[s[i]-'a']==false)
                {
                    consonant.push_back(s[i]);
                    smallLetter[s[i]-'a']=true;
                    capitalLetter[s[i]-'a']=true;
                }
            }
            else
            {
                if(capitalLetter[s[i]-'A']==false)
                {
                    consonant.push_back(s[i]);
                    smallLetter[s[i]-'A']=true;
                    capitalLetter[s[i]-'A']=true;
                }
            }
        }
       
    }

    cout<<"Number of Vowel: "<<vow<<"\n";
    cout<<"Number of Consonant: "<<cons<<"\n";

    cout<<"Vowel: ";
    for(i=0;i<vowel.size();i++)
        cout<<vowel[i]<<" ";
    cout<<"\n";

    cout<<"Consonant: ";
    for(i=0;i<consonant.size();i++)
        cout<<consonant[i]<<" ";
    cout<<"\n";


    for(i=0;s[i];i++)
    {
        if(s[i]!=' ')
            wrd+=s[i];
        else
        {
            if(wrd[0]=='a' || wrd[0]=='e' || wrd[0]=='i' || wrd[0]=='o' || wrd[0]=='u' || wrd[0]=='A' || wrd[0]=='E' || wrd[0]=='I' || wrd[0]=='O' || wrd[0]=='U')
                vowelWords.push_back(wrd);
            else if((wrd[0]>='a' && wrd[0]<='z') || (wrd[0]>='A' && wrd[0]<='Z'))
                consonantWords.push_back(wrd);
            wrd.clear();
        }

    }

    if(wrd[0]=='a' || wrd[0]=='e' || wrd[0]=='i' || wrd[0]=='o' || wrd[0]=='u' || wrd[0]=='A' || wrd[0]=='E' || wrd[0]=='I' || wrd[0]=='O' || wrd[0]=='U')
        vowelWords.push_back(wrd);
    else if((wrd[0]>='a' && wrd[0]<='z') || (wrd[0]>='A' && wrd[0]<='Z'))
        consonantWords.push_back(wrd);

    cout<<"Vowel Words: ";
    for(i=0;i<vowelWords.size();i++)
        cout<<vowelWords[i]<<" ";

    cout<<"\nConsonant Words: ";
    for(i=0;i<consonantWords.size();i++)
        cout<<consonantWords[i]<<" ";
    

    return 0;
}