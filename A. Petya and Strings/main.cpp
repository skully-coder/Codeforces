#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    // convert to lowercase
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    // compare a and b
    cout << a.compare(b) << endl;
}