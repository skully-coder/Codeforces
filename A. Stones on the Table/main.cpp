// A. Stones on the Table
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    
    // count number of consecutive pairs of equal letters
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }
    
    cout << count;
    return 0;
}