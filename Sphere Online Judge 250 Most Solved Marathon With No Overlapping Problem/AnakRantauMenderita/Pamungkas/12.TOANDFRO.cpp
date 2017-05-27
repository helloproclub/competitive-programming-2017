//
// Created by Ki Ageng Satria Pamungkas on 5/27/17.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, dmy, x;
    string s;
    bool sia;
    cin >> n;
    while( n !=  0){
        cin >> s;
        x = 1;
        for (int i = 0; i <n ; ++i) {
            dmy = i;
            sia = true;
            while(dmy <s.length()){
                cout << s[dmy];
                if(sia){
                    dmy += 2 * n - x;
                    sia = false;
                }else{
                    dmy += x;
                    sia = true;
                }
            }
            x += 2;
        }
        cout << endl;
        cin >> n;
    }
}