//
// Created by Ki Ageng Satria Pamungkas on 5/18/17.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,c1,c2,c3,k,low;
    int ar1[5000];
    int ar2[5000];
    int ar3[5000];
    cin >> n;
    c1 = 0;
    c2 = 0;
    c3 = 0;
    for (int i = 0; i <n ; ++i) {
        cin >> k;
        if(k==1){
            ar1[c1]=i;
            c1+=1;
        }else if (k==2){
            ar2[c2]=i;
            c2+=1;
        }else if (k==3){
            ar3[c3]=i;
            c3+=1;
        }
    }
    if (c1<c2){
        if(c1<c3){
            cout << c1 <<endl;
            low = c1;
        }else{
            cout << c3 << endl;
            low = c3;
        }
    }else{
        if (c2<c3){
            cout<< c2<< endl;
            low = c2;
        }else{
            cout << c3 << endl;
            low = c3;
        }
    }
    if(low!=0){
        for (int i = 0; i <low ; ++i) {
            cout << ar1[i]+1<<' '<<ar2[i]+1<<' '<<ar3[i]+1<<endl;
        }
    }
    return 0;
}