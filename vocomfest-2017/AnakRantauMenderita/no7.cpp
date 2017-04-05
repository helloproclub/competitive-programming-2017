//
// Created by Ki Ageng Satria Pamungkas on 4/2/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long int T, N, A, B, TAM, YB, XB, YA,Hah;
    long long int height[100000];
    bool all;
    bool cek[100000];
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> N >> A >> B;
        for (int j = 0; j < N ; ++j) {
            cin >> height[j];
            cek[j] = false;
        }
        YA = height[A-1];
        XB = A - B;
        all = false;
        do {
            for (int j = A; j < B - 1; ++j) {
                YB = YA - height[B - 1];
                Hah = (j - A + 1) / XB;
                Hah = Hah * YB;
                Hah = Hah + YA;
                if ((height[j]) > Hah) {
                    YA += 1;
                    cout << j << endl;
                } else {
                    cek[j] = true;
                }
            }
            for (int j = A; j < B - 1; ++j){
                if(cek[j]){
                    all = true;
                }else{
                    all = false;
                }
            }
        }while(not all);
        cout << "Case #" << i + 1 << ": " << YA - height[A-1] << endl;
    }
}