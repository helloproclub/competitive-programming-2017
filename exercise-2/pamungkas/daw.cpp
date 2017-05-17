//
// Created by Ki Ageng Satria Pamungkas on 5/7/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,Q,X;
    cin>> N;
    int array1[100000];
    int array2[100000];
    for (int i = 0; i <N ; ++i) {
        cin>>array1[i];
    }
    cin >> Q;
    for (int i = 0; i <Q ; ++i) {
        cin >> X;
        X = X % N;
        for (int j = 0; j < N ; ++j) {
            if (j- X < 0) {
                array2[j] = array1[j]+ array1[N-(X-j)];
            }else{
                array2[j] = array1[j]+ array1[j-X];
            }
        }
        for (int j = 0; j < N ; ++j) {
            array1[j]= array2[j];
        }
    }
    X = 0;
    for (int i = 0; i <N ; ++i) {
        X+=array1[i];
    }
    cout<< X<<endl;
    return 0;
}
