#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mat[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }
    int prob_count = 0;
    for (int i = 0; i < n; i++)
    {
        int sure = 0;
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] == 1)
            {
                sure++;
            }
        }
        if(sure >= 2)
        {
            prob_count++;
        }
    }

    cout << prob_count << endl;
}