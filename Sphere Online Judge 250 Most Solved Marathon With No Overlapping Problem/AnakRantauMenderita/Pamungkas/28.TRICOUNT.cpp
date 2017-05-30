//
// Created by Ki Ageng Satria Pamungkas on 5/30/17.
//
#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;
int main(){
    uint64_t res, n;
    long t;
    cin >> t;
    while (t--){
        cin >> n;
        cout << (n*(n+2)*(2*n+1))/8 << endl;
    }
}
