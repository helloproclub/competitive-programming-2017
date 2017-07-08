//
// Created by Ki Ageng Satria Pamungkas on 7/8/17.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <iomanip>
struct point {
    double x,y;
};
using namespace std;
vector < point > ar;
map <int, int> par;
double jarak(point p1, point p2){
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}

int main(){
    long long N;
    cin >> N;
    double muin;
    while (N--){
        cout << endl;
        ar.clear();
        par.clear();
        double length  = 0;
        long long t;
        cin >> t;
        while (t--){
            point dum;
            cin >> dum.x >> dum.y;
            ar.push_back(dum);
        }
        cout <<  setprecision(3)<<  length <<endl;
        cout << endl;
    }
}