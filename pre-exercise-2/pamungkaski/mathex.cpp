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
    int a, b, c;
    cin>>a>>b>>c;
    int hasil[8];
    hasil[0]= a+b+c;
    hasil[1]= a*b*c;
    hasil[2]= (a+b)*c;
    hasil[3]= a*(b+c);
    hasil[4]= a*b+c;
    hasil[5]= b*c+a;
    int max= hasil[0];
    for (int i = 0; i <6 ; ++i) {
        if (max<hasil[i]){
            max = hasil[i];
        }
    }
    cout<<max<<endl;
};