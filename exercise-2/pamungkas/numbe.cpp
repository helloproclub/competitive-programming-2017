//
// Created by Ki Ageng Satria Pamungkas on 3/30/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N,max;
    cin >> N;
    long int list[1000];
    int head,tail;
    head =0;
    tail = N-1;
    for (int i = 0; i < N; ++i) {
        cin>>list[i];
    }
    int turn = 1;
    int hasil = 0;
    long int tap[4];
    while(head<=tail){
        tap[0]= -2147483647;
        tap[1]= -2147483647;
        tap[2]= -2147483647;
        tap[3]= -2147483647;
        tap[0]= list[head];
        tap[1]= list[tail];
        if(head != tail) {
            tap[2] = list[head] + list[head + 1];
            tap[3] = list[tail] + list[tail - 1];
        }
        max = 0;
        for (int i = 0; i < 4; ++i) {
            if(tap[max]<tap[i]){
                max=i;
            }
        }
//        cout<< max <<" "<<head<<" "<<tail<<endl;
        if(max == 0){
            head+=1;
        }else if(max == 1){
            tail-=1;
        }else if(max == 2){
            head+=2;
        }else if(max == 3){
            tail-=2;
        }
        if(turn %2 == 1){
            hasil+= tap[max];
        }
        turn+=1;
    }
    cout << hasil<<endl;
}