#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back

map<char, string> dept = {
    {'C', "Computer Science & Engineering"},
    {'I', "Information & Communication Engineering"},
    {'M', "Material Science & Engineering"},
    {'E', "Electrical & Electronics Engineering"}
};

map<char, string> course = {
    {'1', "Computer Fundamentals"},
    {'2', "Data Structures"},
    {'3', "Design & Analysis of ALgorithm"},
    {'4', "Compiler Design"},
    {'5', "Theory of Computation"},
    {'6', "Database Management System"},
    {'7', "Computer NEtwork"}
};

map<char, string> year = {
    {'1', "1st year"},
    {'2', "2nd year"},
    {'3', "3rd year"},
    {'4', "4th year"}
};

map<char, string> semester = {
    {'1', "1st semester"},
    {'2', "2nd semester"}
};

map<int, string> type = {
    {'1', "Theory"},
    {'2', "Lab"}
};

int main()
{
    // freopen("3.input.txt", "r", stdin);
    // freopen("3.output.txt", "w", stdout);

    string s;
    cin >> s; //CSE-3141

    cout << dept[s[0]] << ", "
         << year[s[4]] << ", "
         << semester[s[5]] << ", "
         << course[s[6]] << ", "
         << type[s[7]] << ".";

    cout<<"\n";
    return 0;
}