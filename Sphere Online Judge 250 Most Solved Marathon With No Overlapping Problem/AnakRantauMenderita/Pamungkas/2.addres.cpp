//
// Created by Ki Ageng Satria Pamungkas on 5/24/17.
//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    unsigned int n;
    int ans,x1,y1;
    string x,y;
    cin >> n;
    for (int i = 0; i <n ; ++i) {
        cin >> x >> y;
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());
        x1 = stoi(x);
        y1 = stoi(y);
        ans =  x1+y1;
        x = to_string(ans);
        reverse(x.begin(), x.end());
        x1 = stoi(x);
        x = to_string(x1);
        cout << x << endl;
    }
    return 0;
}
