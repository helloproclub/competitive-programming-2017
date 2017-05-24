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
    int s,n,nA1,nA2,nA3,nA4,nA5,nB1,nB2,nB3,nB4,nB5,n1,n2,n3,n4,n5 = 0;
    int A[100];
    int B[100];
    cin >> n;
    for (int i = 0; i <n ; ++i) {
        cin>>s;
        if(s==1){
            nA1 +=1;
            n1 +=1;
        }else if(s==2){
            nA2 +=1;
            n2 += 1;
        }else if(s==3){
            nA3 +=1;
            n3 += 1;
        }else if(s==4){
            nA4 +=1;
            n4 += 1;
        }else if(s==5){
            nA5 +=1;
            n5+=1;
        }
    }
    for (int i = 0; i <n ; ++i) {
        cin>>s;
        if(s==1){
            nB1 +=1;
            n1 +=1;
        }else if(s==2){
            nB2 +=1;
            n2 += 1;
        }else if(s==3){
            nB3 +=1;
            n3 += 1;
        }else if(s==4){
            nB4 +=1;
            n4 += 1;
        }else if(s==5){
            nB5 +=1;
            n5+=1;
        }
    }
    if((n1%2=1)or(n2%2=1)or(n3%2=1)or(n4%2=1)or(n5%2=1)){
        cout << -1 << endl;
    }
    return 0;
}
