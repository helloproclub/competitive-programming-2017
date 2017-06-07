//
// Created by Ki Ageng Satria Pamungkas on 6/7/17.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;
string A, B;
int main(){
    int t, res;
    cin >> t;
    while(t--){
        res = 0;
//        getline(cin, A,'\n');
//        getline(cin, B,'\n');
        cin >> A >> B;
        while(A.size()<B.size()){
            A += B[A.size()];
            res++;
        }
        while(B.size()<A.size()){
            B += A[B.size()];
            res++;
        }
        for (int i = 0; i <A.size() ; ++i) {
            if(A[i]!=B[i]){
//                cout << A[i] << B[i] << endl;
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}