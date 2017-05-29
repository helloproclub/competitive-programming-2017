#include <iostream>

#define ull unsigned long long int
using namespace std;

int main(){
    ull t;
    cin >> t;
    while(t--){
        ull k, o = 192;
        cin >> k;
        o += (k-1) * 250;
        cout << o << endl;
    }
}
