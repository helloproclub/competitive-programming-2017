//
// Created by Ki Ageng Satria Pamungkas on 3/30/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long int T, A, B,  RANGE;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> A >> B;
        RANGE = B - A;
        if(A>B) {
            cout << "Case #" << i + 1 << ": " << "impossible" << endl;
        }else if (RANGE%12 == 0){
            cout<<"Case #"<<i+1<<": "<< (7*(RANGE/12))+A<<endl;
        }else if(A == B){
            cout<<"Case #"<<i+1<<": "<< A<<endl;
        }else {
            cout << "Case #" << i + 1 << ": " << "impossible" << endl;
        }
    }
}
