//
// Created by Ki Ageng Satria Pamungkas on 5/27/17.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long t, n, x, res;
    vector <int> male;
    vector <int> female;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        res = 0;
        for (int j = 0; j < n; ++j) {
            cin >> x;
            male.push_back(x);
        }
        for (int j = 0; j < n; ++j) {
            cin >> x;
            female.push_back(x);
        }
        sort(male.begin(), male.end());
        sort(female.begin(), female.end());
        for (int j = 0; j < n; ++j) {
            res+= (male[j]*female[j]);
        }
        cout << res << endl;
        male.clear();
        female.clear();
    }
    return  0;
}