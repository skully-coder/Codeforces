#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int steps = n / 5 + (n % 5 > 0);
    cout << steps;
    return 0;
}