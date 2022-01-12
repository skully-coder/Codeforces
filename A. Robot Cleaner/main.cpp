#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, rb, cb, rd, cd;
        cin >> n >> m >> rb >> cb >> rd >> cd;
        int count = 0;
        int r = 1, c = 1;
        while (rb != rd and cb != cd)
        {
            count++;

            if (rb == n)
            {
                r = -1;
            }
            if (cb == m)
            {
                c = -1;
            }
            rb = rb + r;
            cb = cb + c;
        }
        cout << count << endl;
    }
}