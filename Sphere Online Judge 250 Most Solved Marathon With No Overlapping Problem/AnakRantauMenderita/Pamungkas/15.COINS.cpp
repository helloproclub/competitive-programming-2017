//
// Created by Ki Ageng Satria Pamungkas on 5/28/17.
//

#include <iostream>
#include <map>

using namespace std;

unsigned long count(unsigned long n, map < unsigned long, unsigned long > &mapz){
    map < unsigned long, unsigned long >::iterator it;
    it = mapz.find(n);
    if(it != mapz.end()){
        return mapz[n];
    }else{
        unsigned long x;
        x = count(n / 2, mapz) + count(n / 3, mapz) + count(n / 4, mapz);
        if (x > n) {
            mapz[n] = x;
            return x;
        } else {
            mapz[n] = n;
            return n;
        }
    }
}

int main(){
    unsigned long n;
    ios::sync_with_stdio(false);
    map < unsigned long, unsigned long >mapz;
    mapz[0] = 0;
    mapz[1] = 1;
    mapz[2] = 2;
    while (cin >> n){
        cout << count(n, mapz) << endl;
    }

}