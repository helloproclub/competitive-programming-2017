//
// Created by Ki Ageng Satria Pamungkas on 5/30/17.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<long> fstamp;
    long t, nee, x, fs,counter, max;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> nee >> fs;
        for (int j = 0; j <fs ; ++j) {
            cin >> x;
            fstamp.push_back(x);
        }
        x = 0;
        counter = 0;
        sort(fstamp.begin(),fstamp.end());
        max = fstamp.size()-1;
        while((x < nee)and(counter<fs)){
            x+=fstamp[max];
            max--;
            counter++;
        }
        if(x<nee){
            cout<<"Scenario #"<<i+1<<":\n"<<"impossible"<<endl;
        }else{
            cout<<"Scenario #"<<i+1<<":\n"<<counter<<endl;
        }
        if(i!=t-1){
            cout << endl;
        }
        fstamp.clear();
    }

    return 0;
}