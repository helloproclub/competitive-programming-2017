//
// Created by Ki Ageng Satria Pamungkas on 5/30/17.
//
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    long n;
    bool aw;
    int x;
    cin >> n;
    while (n != 0){
        for (long j = 0; j <n ; ++j) {
            cin >> x;
            v.push_back(x);
        }
        aw = true;
        for (int i = 0; i <n ; ++i) {
            x = v[i]-1;
            if(v[x] != i+1){
                aw = false;
                break;
            }
        }
        if(aw){
            cout << "ambiguous" << endl;
        }else{
            cout << "not ambiguous" << endl;
        }
        cin >> n;
        v.clear();
    }
}
