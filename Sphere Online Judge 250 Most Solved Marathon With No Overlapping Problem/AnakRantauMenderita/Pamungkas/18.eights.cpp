//
// Created by Ki Ageng Satria Pamungkas on 5/28/17.
//

#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;
void add(vector<int> &v,vector<int> &w){
    uint64_t carry = 0;
    uint64_t sum;
    while(w.size()<v.size()){
        w.push_back(0);
    }
    for (uint64_t i = 0; i <w.size() ; ++i) {
        sum = v[i]+w[i] + carry;
        v[i] = sum % 10;
        carry =  sum /10;
    }
    while(carry != 0){
        if(w.size() == v.size()) {
            v.push_back(carry % 10);
        }else{
            sum = v[w.size()] + carry;
            v[w.size()] = sum % 10;
        }
        carry = carry/10;
    }
}
void multiply(vector<int> &v,uint64_t x){
    uint64_t carry = 0;
    uint64_t prod;
    for (uint64_t i = 0; i <v.size() ; ++i) {
        prod = v[i]*x + carry;
        v[i] = prod % 10;
        carry =  prod /10;
    }
    while(carry != 0){
        v.push_back(carry%10);
        carry = carry/10;
    }
}
int main (){
    uint64_t t,n;
    cin >> t;
    vector <int> a;
    vector <int> b;
    for (uint64_t i = 0; i < t; ++i) {
        cin >> n;
        a.push_back(2);
        a.push_back(9);
        a.push_back(1);
        b.push_back(0);
        b.push_back(5);
        b.push_back(2);
        multiply(b,n-1);
        add(b,a);
        reverse(b.begin(), b.end());
        for (uint64_t j = 0; j <b.size() ; ++j) {
            cout << b[j];
        }
        cout<<endl;
        a.clear();
        b.clear();
    }
}