//
// Created by Ki Ageng Satria Pamungkas on 5/27/17.
//

#include <iostream>
#include <vector>
using namespace std;
int main(){
    long n, sum, x, avg, m;
    cin >> n;
    vector <int> v;
    while (n != -1){
        sum = 0;
        for (int i = 0; i < n ; ++i) {
            cin >> x;
            v.push_back(x);
            sum+=x;
        }
        m = 0;
        if(sum % v.size() == 0){
            avg = sum / v.size();
            for (int i = 0; i <v.size() ; ++i) {
                if( v[i] < avg ){
                    m+=(avg-v[i]);
                }
            }
            cout << m << endl;
        }else{
            cout << -1  << endl;
        }
        v.clear();
        cin >> n;
    }
}