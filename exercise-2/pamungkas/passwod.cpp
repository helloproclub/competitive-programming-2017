//
// Created by Ki Ageng Satria Pamungkas on 4/5/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string pas;
    int NpasL[100];
    int n,k,sum,pcount;
    cin >> n >> k;
    for (int i = 0; i <100; ++i) {
        NpasL[i] = 0;
    }
    for (int i = 0; i <n; ++i) {
        cin >> pas;
        NpasL[pas.length()] += 1;
    }
    pcount = 0;
    sum = 0;
    string rPas;
    cin >> rPas;
    int lrPas = rPas.length();
    for (int i = 1; i <lrPas; ++i) {
        pcount+=NpasL[i];
    }
    sum+= pcount +(pcount/k)*5;
    pcount = pcount%k;
    if((pcount==0) and (sum!=0)){
        cout << sum+5 <<' ';
    }else{
        cout << sum+1 <<' ';
    }
    sum+=NpasL[lrPas];
    if((pcount+NpasL[lrPas])>k) {
        if(pcount == 0){
            sum += ((NpasL[lrPas] / k)-1) * 5;
        } else {
            sum += ((NpasL[lrPas] / k)) * 5;
        }
    };
    cout << sum << endl;
}