//
// Created by Ki Ageng Satria Pamungkas on 7/8/17.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int k;
    cin >> k;
    while (k--){
        string s;
        cin >> s;
        int q;
        cin >> q;
        while(q--){
            string each;
            cin >> each;
            size_t found  = s.find(each);
            if(found != string::npos){
                cout << 'y' <<endl;
            }else{
                cout << 'n' <<endl;
            }
        }
    }
}
