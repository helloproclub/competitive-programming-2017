//
// Created by Ki Ageng Satria Pamungkas on 4/5/17.
//
// Problem A
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int r, g[4], i, j, max;
    bool record;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 4; j++)
            cin >> g[j];
        cin >> r;

        max = g[0];
        for (j = 1; j < 4; j++)
            if (g[j] > max) max = g[j];

        if (max > r) record = true;
        else record = false;

        cout << "Case #" << i + 1 << ": ";
        if (record) cout << "new record!";
        else cout << "no new record";
        cout << endl;
    }
    return 0;
}
