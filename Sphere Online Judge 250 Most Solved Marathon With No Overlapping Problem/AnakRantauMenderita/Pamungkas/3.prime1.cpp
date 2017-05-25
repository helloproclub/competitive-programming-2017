//
// Created by Ki Ageng Satria Pamungkas on 5/24/17.
//
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    vector < bool> v(10000);
    vector<unsigned int> prime;
    fill(v.begin(), v.end(),true);
    int t;
    unsigned long x,y,z;
    bool trai,ins;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> x >> y;
        z = floor(sqrt(y))+1;
        for (long j = 2; j*j < z ; ++j) {
            if(v[i]==true){
                for (int k = k*2; k < z; ++k) {
                    if(k%j == 0){
                        v[k]= false;
                    }
                }
                prime.push_back(j);
            }
        }
        for (long j = x; j <=y ; ++j) {
            trai = true;
            ins = false;
            if(j == 1){
                trai = false;
            }else {
                for (long k = 0; k < prime.size(); ++k) {
                    if (j == prime[k]) {
                        ins = true;
                        break;
                    } else if (j % prime[k] == 0) {
                        trai = false;
                        break;
                    }
                }
            }
            if (trai){
                if(!ins) {
                    prime.push_back(j);
                }
                cout << j << endl;
            }
        }
    }
    return 0;
}