//
// Created by Ki Ageng Satria Pamungkas on 3/26/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string k;
    cin >> k;
    string sBase;
    long long int iBase=0;
    long long int cBase=0;
    sBase= to_string(n);
    long long int pN = sBase.size();
    long long int base[100];
    while(k.size()!=0){
        sBase="";
        if(k.size()>pN){
            for (int i = 0; i <=pN ; ++i) {
                sBase= k[(k.size())-i]+sBase;
            }
        }else{
            sBase = k;
        }
        iBase = stol(sBase, nullptr);
        //remove leading zero
        sBase = to_string(iBase);
        if(iBase>=n){
            sBase.erase(0,1);
            iBase = stol(sBase, nullptr);
            //remove leading zero
            sBase = to_string(iBase);
        }
        k.erase(k.size()-(sBase.size()),sBase.size());
        base[cBase]=iBase;
        cBase++;
    }
    long long int ans=0;
    for (int i = 0; i <1; ++i) {
        ans= ans+(base[i]*(pow(n,i)));
    }
    cout<<ans<<endl;
    return 0;
};