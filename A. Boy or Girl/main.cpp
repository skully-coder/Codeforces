#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map<int, int> mp;
    for(char ch: s)
    {
        mp[ch]++;
    }
    int count = 0;
    for(auto it: mp)
    {
        count++;
    }
    if(count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}