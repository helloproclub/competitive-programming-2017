//
// Created by Ki Ageng Satria Pamungkas on 4/5/17.
//
#include <iostream>
using namespace std;
long long int fib(long long int x,long long int fibL[]){
    long long int z;
    if(fibL[x]!=0){
        return fibL[x];
    }else if(x <= 1){
        return x;
    }else{
        fibL[x]=fib(x-1,fibL)+fib(x-2,fibL);
        return(fib(x-1,fibL)+fib(x-2,fibL));
    };
}
int main(){
    long long int fibL[10000];
    for (int i = 0; i < 10000; ++i) {
        fibL[i]=0;
    }
    long long int x;
    cin >> x;
    cout << fib(x,fibL)<<endl;
}
