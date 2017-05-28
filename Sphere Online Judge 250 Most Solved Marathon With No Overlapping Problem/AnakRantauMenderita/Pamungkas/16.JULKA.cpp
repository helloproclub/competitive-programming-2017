//
// Created by Ki Ageng Satria Pamungkas on 5/28/17.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void add(vector<int> &v,vector<int> &w){
    int carry = 0;
    int sum;
    while(w.size()<v.size()){
        w.push_back(0);
    }
    for (int i = 0; i <w.size() ; ++i) {
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
void div2(vector<int>&v){
    int carry1 = 0;
    int subs;
    reverse(v.begin(),v.end());
    for (int i = 0; i <v.size() ; ++i) {
        subs = v[i]/2 + carry1;
        if(v[i]%2 == 0){
            carry1 = 0;
        }else{
            carry1 = 5;
        }
        v[i] = subs;
    }
    if((v[0] == 0)and (v.size()!=1)){
        v.erase(v.begin());
    }
    reverse(v.begin(),v.end());
}
void min(vector<int>&v,vector<int>&w){
    while(w.size()<v.size()){
        w.push_back(0);
    }
    for (int i = 0; i <v.size() ; ++i) {
        if(w[i]>v[i]){
            v[i] +=(10-w[i]);
            v[i+1]--;
        }else{
            v[i]-=w[i];
        }
    }
    reverse(v.begin(),v.end());
//    for (int i = 0; i <v.size() ; ++i) {
//        cout << v[i];
//    }
//    cout<<endl;
    int count = 0;
    while((v[count] == 0)and(count<v.size())){
        count++;
    }
//    cout <<"count "<<count << endl;
    if(count == v.size()){
        v.clear();
        v.push_back(0);
    }else if(count != 0){
        for (int i = 0; i < count ; ++i) {
            v.erase(v.begin());
        }
    }
    reverse(v.begin(),v.end());
}
int main(){
    string s;
    int x;
    vector <int> m;
    vector <int> n;
    vector <int> a;
    vector <int> b;
    for (int i = 0; i < 10; ++i) {
        cin >> s;
        for (int j = 0; j <s.length() ; ++j) {
            x = s[j]-'0';
            m.push_back(x);
        }
        cin >> s;
        for (int j = 0; j <s.length() ; ++j) {
            x = s[j]-'0';
            n.push_back(x);
        }
        reverse(m.begin(), m.end());
        reverse(n.begin(), n.end());

        add(m,n);
//        reverse(m.begin(), m.end());
//        for (int j = 0; j <m.size() ; ++j) {
//            cout << m[j];
//        }
//        cout << endl;
//        reverse(m.begin(), m.end());
        div2(m);
        reverse(m.begin(), m.end());
        for (int j = 0; j <m.size() ; ++j) {
            cout << m[j];
        }
        cout << endl;
        reverse(m.begin(), m.end());
        min(m,n);
        reverse(m.begin(), m.end());
        for (int j = 0; j <m.size() ; ++j) {
            cout << m[j];
        }
        cout << endl;
        m.clear();
        n.clear();
    }
}