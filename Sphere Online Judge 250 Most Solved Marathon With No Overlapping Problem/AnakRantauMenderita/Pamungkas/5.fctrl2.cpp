//
// Created by Ki Ageng Satria Pamungkas on 5/25/17.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void multiply(vector<int> &v,int x){
    int carry = 0;
    int prod;
    for (int i = 0; i <v.size() ; ++i) {
        prod = v[i]*x + carry;
        v[i] = prod % 10;
        carry =  prod /10;
    }
    while(carry != 0){
        v.push_back(carry%10);
        carry = carry/10;
    }
}
void fak(unsigned int k){
    vector<int> res;
    res.push_back(1);
    for (int i = 1; i <=k ; ++i) {
        multiply(res,i);
    }
    for (int i = res.size()-1; i >=0 ; --i) {
        cout<<res[i];
    }
    cout<<endl;
}
int main(){
    unsigned int t,n;
    cin >> t;
    for (unsigned int i = 0; i <t ; ++i) {
        cin >> n;
        fak(n);
    }
}