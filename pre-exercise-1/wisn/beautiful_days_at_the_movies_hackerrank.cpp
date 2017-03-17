#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int i, j, k;
    cin >> i >> j >> k;

    long int l, x, y, r, sum = 0;
    for (l = i; l <= j; l++) {
        x = l; y = 0;
        while (x != 0) {
            r = x % 10;
            y = (y * 10) + r;
            x /= 10;
        }
        y = abs(l - y);
        x = y % k;
        if (x == 0 || y == 0) sum++;
    }

    cout << sum << endl;
    return 0;
}

