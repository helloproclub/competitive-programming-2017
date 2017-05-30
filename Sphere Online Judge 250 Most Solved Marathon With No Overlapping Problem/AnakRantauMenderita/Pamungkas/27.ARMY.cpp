//
// Created by Ki Ageng Satria Pamungkas on 5/30/17.
//
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    vector < int > God;
    vector < int > MecGod;
    long n,NG,NM, x;
    cin >> n;
    for (int i = 0; i < n ; ++i) {
        cin >> NG >> NM;
        for (int j = 0; j <NG ; ++j) {
            cin >> x;
            God.push_back(x);
        }
        for (int j = 0; j <NM ; ++j) {
            cin >> x;
            MecGod.push_back(x);
        }
        sort(God.begin(),God.end());
        sort(MecGod.begin(),MecGod.end());
        if(MecGod[MecGod.size()-1]>God[God.size()-1]){
            cout << "MechaGodzilla" <<endl;
        }else{
            cout << "Godzilla" << endl;
        }
        MecGod.clear();
        God.clear();
    }
}
