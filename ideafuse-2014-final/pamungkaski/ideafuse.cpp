//
// Created by Ki Ageng Satria Pamungkas on 4/1/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,Q,ans;
    long long int berat[100000];
    long long int x,y;
    cin >> N;
    for (int i = 0; i <N ; ++i) {
        cin>>berat[i];
    }
    cin >> Q;
    for (int i = 0; i <Q ; ++i) {
        cin>>x>>y;
        ans = 0;
        for (int j = 0; j <N ; ++j) {
            if((berat[j]>x)and(berat[j]<=y)){
                ans+=1;
            }
        }
        cout << ans << endl;
    }
}
