//
// Created by Ki Ageng Satria Pamungkas on 6/6/17.
//
#include <iostream>
using namespace std;
int main(){
    long long t, x, y, z, n, a, b;
    cin >> t;
    while(t--){
        cin >> x >> y >> z;
        n = (2*z)/(x+y);
        b = (y-x)/(n-5);
        a = x-(2*b);
        //cout << a << " " << b << " " << n << endl;
        cout << n << endl;
        for (long long i = 1; i <=n ; ++i) {
            cout << a+(i-1)*b;
            if(i == n){
                cout << endl;
            }else{
                cout << " ";
            }
        }
    }
}