#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    // capitalise first letter
    s[0] = toupper(s[0]);
    // print the string
    cout << s;
}