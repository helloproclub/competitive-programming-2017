//
// Created by Ki Ageng Satria Pamungkas on 6/6/17.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double L;
    cin >> L;
    while(L) {
        cout <<fixed<< setprecision(2) << (L * L / 3.14159) / 2 << endl;
        cin >> L;
    }
    return 0;
}