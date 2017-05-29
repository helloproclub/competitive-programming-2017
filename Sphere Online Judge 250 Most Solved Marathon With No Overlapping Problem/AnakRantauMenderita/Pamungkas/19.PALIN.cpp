//
// Created by Ki Ageng Satria Pamungkas on 5/28/17.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void add(vector<char>&v,long x){
    if(v[x] == '9'){
        if(x == 0){
            v[x]= '0';
            v.insert(v.begin(),'1');
        }else {
            v[x] = '0';
            add(v, x - 1);
        }
    }else{
        if(v[x] == '0'){
            v[x] = '1';
        }else if(v[x] == '1'){
            v[x] = '2';
        }else if(v[x] == '2'){
            v[x] = '3';
        }else if(v[x] == '3'){
            v[x] = '4';
        }else if(v[x] == '4'){
            v[x] = '5';
        }else if(v[x] == '5'){
            v[x] = '6';
        }else if(v[x] == '6'){
            v[x] = '7';
        }else if(v[x] == '7'){
            v[x] = '8';
        }else if(v[x] == '8'){
            v[x] = '9';
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    long t,hh;
    string s;
    vector <char> v;
    cin >> t;
    for (long i = 0; i <t ; ++i) {
        cin >> s;
        for (long j = 0; j <s.length() ; ++j) {
            v.push_back(s[j]);
        }
        add(v,v.size()-1);
        for (long j = 0; j <v.size()/2 ; ++j) {
            if(v[j] != v[v.size()-j-1]){
                if(v[j] < v[v.size()-j-1] ){
                    add(v,v.size()-j-2);
                    v[v.size()-j-1] = v[j];
                }else{
                    v[v.size()-j-1] = v[j];
                }
            }
        }
        for (long j = v.size()-1; j >=0 ; --j) {
            cout << v[j];
        }
        cout << endl;
        v.clear();
    }
}