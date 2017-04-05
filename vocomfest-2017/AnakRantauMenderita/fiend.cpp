//
// Created by Ki Ageng Satria Pamungkas on 4/2/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    struct inv{
        int first;
        int last;
        int acco;
    };
    int T, A, B;
    cin >> T;
    inv lisInv[100];
    int has[100];
    int mHas[100];
    for (int i = 0; i < T; ++i) {
        cin >> A >> B;
        for (int j = 0; j < A; ++j) {
            cin >> lisInv[j].first >> lisInv[j].last >> lisInv[j].acco;
        }
        for (int j = 0; j < A; ++j) {
            has[j] = 1;
            mHas = lisInv[j].acco;
            for (int k = 0; k < A ; ++k) {
                if(k!=j){
                    if(((lisInv[k].first<lisInv[j].first)and(lisInv[k].last<lisInv[j].first))or((lisInv[k].first>lisInv[j].last)and(lisInv[k].last>lisInv[j].last))){
                        has[j] += 1;
                        mHas += lisInv[k].acco;
                    }
                }
            }
        }
    }
}
