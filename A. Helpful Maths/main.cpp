#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    // extract the numbers from the string
    string numbers = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            numbers += s[i];
        }
    }
    // sort the string in ascending order
    sort(numbers.begin(), numbers.end());
    // print the string with '+' between the numbers
    for (int i = 0; i < numbers.length(); i++)
    {
        cout << numbers[i];
        if (i != numbers.length() - 1)
        {
            cout << "+";
        }
    }
    return 0;
}