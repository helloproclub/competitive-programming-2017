#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        long need = 0;
        long current_resources = 0;
        int tiers;
        cin >> tiers;
        for (int j = 0; j < tiers; j++) {
            long next, bonus;
            cin >> next >> bonus;
            if (current_resources < next) {
                need += next - current_resources;
                current_resources += next - current_resources + bonus;
            } else {
                current_resources += bonus;
            }
        }
        cout << "Case #" << i + 1 << ": " << need << endl;
    }
    return 0;
}