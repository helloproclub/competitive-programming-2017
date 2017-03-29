//
// Created by Ki Ageng Satria Pamungkas on 3/29/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n, x;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n ; ++i) {
        cin >> x;
        if(x==1){
            n1+=1;
        }else if(x==2){
            n2+=1;
        }else if(x==3){
            n3+=1;
        }else if(x==4){
            sum+=1;
        }
    }
    sum+= n2/2;
    n2= n2%2;
    if(n1>n3){
        sum+=n3;
        n1-=n3;
        n3-=n3;
        sum+= n1/4;
        n1= n1%4;
        if (n2==1){
            sum+=n2;
            n2=0;
            n1-=2;
            if (n1>0){
                sum+=1;
            }
        }else if (n1>0){
            sum+=1;
        }
    }else{
        sum+=n1;
        n3-=n1;
        n1-=n1;
        sum+=n3;
        sum+=n2;
    }
    cout<<sum<<endl;
}
