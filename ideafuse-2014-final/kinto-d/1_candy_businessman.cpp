#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int total_shop;
        vector<int> shop;

        // input for each case
        cin >> total_shop;
        for (int j = 0; j < total_shop; j++) {
            int price;
            cin >> price;
            shop.push_back(price);
        }

        // sort vector for get max and minimum;
        sort(shop.begin(), shop.end());

        int max = shop[shop.size()-1];
        int min = shop[0];

        // output maximize
        cout << "Case #" << i + 1 << ": " << max - min << "\n";
    }
    return 0;
}