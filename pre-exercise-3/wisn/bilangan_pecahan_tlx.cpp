#include <iostream>
using namespace std;

int gcd_(int a, int b) {
    int tmp;
    while (b)
    {
        tmp = a;
        a   = b;
        b   = tmp % b;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    int x = gcd_(a, b);
    if (x == 1) cout << "Tidak";
    else
    {
        a /= x;
        b /= x;
        cout << a << " " << b;
    }
    cout << endl;
    
    return 0;
}