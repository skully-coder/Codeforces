#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][5];
    int idx, jdx;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 1)
            {
                idx = i;
                jdx = j;
            }
        }
    }
    int swaps = abs(idx - 2) + abs(jdx - 2);
    cout << swaps;
    return 0;
}