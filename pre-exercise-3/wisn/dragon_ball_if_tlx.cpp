#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string a (""), e ("");
    int p;
    while (n--)
    {
        cin >> p;
        while (p--)
        {
            a += "a";
            e += "e";
        }
        cout << "k" << a << "m" << e << "h" << a << "m" << e << "h" << a << endl;

        a = "";
        e = "";
    }

    return 0;
}