//
// Created by Ki Ageng Satria Pamungkas on 5/24/17.
//
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
    vector < bool> v(10000);
    vector<unsigned int> prime;
    fill(v.begin(), v.end(),true);
    for (int i = 2; i <10000 ; ++i) {
        if(v[i]==true){
            for (int j = i; j <10000 ; ++j) {
                if(j%i == 0){
                    v[j]= false;
                }
            }
            prime.push_back(i);
        }
    }
    int t;
    unsigned long x,y,z;
    bool trai;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> x >> y;
        z = 2;
        for (int j = x; j <=y ; ++j) {
            trai = true;
            for (int k = 0; k <prime.size() ; ++k) {
                if(j == prime[k]){
                    break;
                }else if(j % prime[k] == 0){
                    trai = false;
                    break;
                }else if(j == 1){
                    trai = false;
                    break;
                }
            }
            if(trai){
                cout<<j<<endl;
            }
        }
        if(i != t-1){
            cout << endl;
        }
    }
    return 0;
}