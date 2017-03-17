#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, p, v, t, x, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p >> v >> t;
        x    = p + v + t;
        sum += floor(x / 2);
    }

    cout << sum << endl;
    return 0;
}
