//
// Created by Ki Ageng Satria Pamungkas on 5/25/17.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    unsigned long t, n, n5 = 0,dummy;
    cin >> t;
    for (int i = 0; i <t ; ++i) {
        cin >> n;
        n5 = 0;
        dummy = 5;
        while(dummy <= n){
            n5+= n/dummy;
            dummy*=5;
        }
        cout << n5 << endl;
    }
}