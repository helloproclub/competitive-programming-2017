//
// Created by Ki Ageng Satria Pamungkas on 5/27/17.
//
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long t, a, b;
    cin >> t;
    for (int i = 0; i <t ; ++i) {
        cin >> a >> b;
        if ((a == 0)and((b == 0))){
            cout << 1 << endl;
        }else if(a == 0){
            cout << a << endl;
        }else if(b== 0){
            cout << 1 << endl;
        }else {
            b = b % 4;
            if(b == 0){
                b = 4;
            }
            a = long(pow(a, b));
            b = a % 10;
            cout << b << endl;
        }
    }
    return 0;
}

