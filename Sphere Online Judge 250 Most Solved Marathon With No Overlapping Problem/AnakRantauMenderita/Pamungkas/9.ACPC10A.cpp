//
// Created by Ki Ageng Satria Pamungkas on 5/26/17.
//

#include <iostream>
using namespace std;

int main(){
    long a, b, c;
    cin >> a >> b >> c;
    while((a != 0)or(b != 0)or(c != 0)){
        if(b-a == c-b){
            cout<< "AP "<< 2*c-b << endl;
        }else if(b/a == c/b){
            cout<< "GP "<< (c*c)/b << endl;
        }
        cin >> a >> b >> c;
    }
}