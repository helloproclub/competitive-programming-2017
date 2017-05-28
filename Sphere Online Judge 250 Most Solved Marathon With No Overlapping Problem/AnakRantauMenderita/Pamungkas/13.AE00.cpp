//
// Created by Ki Ageng Satria Pamungkas on 5/27/17.
//
#include <iostream>

using namespace std;

int main(){
    long n, sum = 0;
    cin >> n;
    for (int i = 1; i <=n ; ++i) {
        for (int j = i; j <=n ; ++j) {
            if( i * j <= n){
                sum++;
            }
        }
    }
    cout << sum << endl;
}