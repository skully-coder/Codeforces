#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int total_price = 0;
    for(int i = 1; i<=w; i++)
    {
        total_price += k * i;
    }
    if(total_price <= n)
    {
        cout << "0";
    }
    else
    {
        cout << total_price - n;
    }
    return 0;
}