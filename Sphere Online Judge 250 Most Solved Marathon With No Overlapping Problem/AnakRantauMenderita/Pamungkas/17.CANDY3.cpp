//
// Created by Ki Ageng Satria Pamungkas on 5/28/17.
//

#include <iostream>
#include <cstdint>
using namespace std;
int main(){
    uint64_t t,n, x, sum;
    cin >> t;
    //ios::sync_with_stdio(false);
    for (uint64_t i = 0; i <t ; ++i) {
        cout << endl;
        cin >> n;
        sum = 0;
        for (int j = 0; j < n; ++j) {
            cin >> x;
            sum+= x % n;
        }
        if(sum % n == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}