//
// Created by Ki Ageng Satria Pamungkas on 6/1/17.
//
#include <iostream>
#include <stack>
using namespace std;
stack <int> cil;
int main(){
    int n, last, x;
    bool cas;
    cin >> n;
    while(n){
        last = 0;
        cas = true;
        for (int i = 0; i < n ; ++i) {
            cin >> x;
            if(cas) {
                if (i == 0) {
                    cil.push(x);
                } else {
                    if (x == last) {
                        last = x;
                    } else if (x > last) {
                        while (!cil.empty()) {
                            if (cil.top() < x) {
                                last = cil.top();
                                cil.pop();
                            } else {
                                break;
                            }
                        }
                        if (cil.empty()) {
                            cil.push(x);
                        }else{
                            if(cil.top()!=x){
                                cil.push(x);
                            }
                        }
                    } else {
                        //cout << x <<" "<< " " <<" "<< last <<" "<< endl;
                        cas = false;
                    }
                }
            }
        }
        if(cas){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
        cin >> n;
        while (!cil.empty()){
            cil.pop();
        }
    }
    return 0;
}
