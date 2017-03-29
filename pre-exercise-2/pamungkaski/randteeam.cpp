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
    long long int n, m;
    long long int sum = 0;
    cin >> n >> m;
    long long int x = n-m+1;
    long long int y = (n/m);
    long long int z = y+1;
    sum = (m-(n-y*m))*(y*(y-1)/2) + (n-y*m)*(z*(z-1)/2);
    x = x*(x-1)/2;
    cout << sum << ' ' << x << endl;
    return 0;
}