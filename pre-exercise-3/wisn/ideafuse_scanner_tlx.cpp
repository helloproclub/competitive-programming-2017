#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, x;
    cin >> s;

    x = "ideafuse";

    int len = s.length(), p = 0, i, j;
    for (i = 0; i < len - 7; i++)
    {
        if (x[p] != s[i])
        {
            p = 0;
            continue;
        }
        else p++;

        for (j = i + 1; j < i + 8; j++)
        {
            if (x[p] != s[j])
            {
                p = 0;
                break;
            }
            else p++;

            if (p == 8) break;
        }

        if (p == 8) break;
    }

    if (p != 8) i = -1;
    else i++;

    cout << i << endl;

    return 0;
}