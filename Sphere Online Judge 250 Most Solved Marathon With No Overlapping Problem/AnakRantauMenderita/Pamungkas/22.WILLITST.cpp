//
// Created by Ki Ageng Satria Pamungkas on 5/29/17.
//

#include <iostream>
#include <cmath>
#include <cstdint>
using namespace std;

int main(){
    unsigned long long n;
    cin>>n;

    if((n&(n-1))==0)//i.e power of 2
        cout<<"TAK";
    else
        cout<<"NIE";

    return 0;
}