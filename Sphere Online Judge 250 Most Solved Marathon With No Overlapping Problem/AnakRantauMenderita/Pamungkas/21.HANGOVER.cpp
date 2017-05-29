//
// Created by Ki Ageng Satria Pamungkas on 5/29/17.
//
#include <iostream>

using namespace std;

int main(){
    float in, res;
    long n;
    cin >> in;
    while(in > 0.00){
        n = 1;
        res = 0.5;
        while(res < in){
            n++;
            res += (1/float(n+1));
        }
        cout << n << " card(s)" <<  endl;
        cin>> in;
    }
    return 0;
}
