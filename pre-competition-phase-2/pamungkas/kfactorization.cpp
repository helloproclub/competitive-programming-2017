//
// Created by Ki Ageng Satria Pamungkas on 5/17/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long int n,k,count,counter;
    int ar[10000];
    count = 0;
    counter = 2;
    cin >> n >> k;
    while((n>1)and(count<k-1)){
        if(n % counter == 0){
            ar[count]=counter;
            count+=1;
            n = n / counter;
        }else{
            counter+=1;
        }
    }
    if((count < k-1)or(n == 1)){
        cout << -1 <<endl;
    }else {
        for (int i = 0; i < count; ++i) {
            cout << ar[i] << ' ';
        }
        cout<<n<<endl;
    }
    return 0;
}
