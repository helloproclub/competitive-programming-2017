//
// Created by Ki Ageng Satria Pamungkas on 3/26/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,a,b,c,ans;
    cin>>n;
    for (int i = 0; i <n ; ++i) {
        cin>>a>>b>>c;
        if((a+b+c)>=2){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
};