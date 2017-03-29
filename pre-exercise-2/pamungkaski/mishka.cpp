//
// Created by Ki Ageng Satria Pamungkas on 3/29/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m, c;
    int Nm = 0;
    int Nc = 0;
    cin >> n;
    for (int i = 0; i <n ; i++) {
        cin >> m >> c;
        if (m>c){
            Nm += 1;
        }else if (c>m){
            Nc += 1;
        }
    }
    if(Nm>Nc){
        cout<<"Mishka"<<endl;
    }else if(Nc>Nm){
        cout<<"Chris"<<endl;
    }else{
        cout<<"Friendship is magic!^^"<<endl;
    }
}
