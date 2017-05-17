#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int R,C,B;
    cin >> R >> C >> B;

    for (int i = 0; i < R; ++i) {
        int flag;
        cin >> flag;
        int diff = B - flag;
        if (diff < 0){
            diff = abs(diff);
            for (int j = 0; j < diff; j++) {
                cout << "right" << endl;
            }
        } else if (diff > 0){
            for (int j = 0; j < diff; j++) {
                cout << "left" << endl;
            }

        }
        cout << "forward" << endl;
    }
    cout << "finish" << endl;

    return 0;
}