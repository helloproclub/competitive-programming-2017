//
// Created by Ki Ageng Satria Pamungkas on 5/30/17.
//
#include <iostream>

using namespace std;

int main(){
    long long t, n,i,j, counter;
    cin >> t;
    for (int k = 0; k < t; ++k) {
        cin >> n;
        counter = 1;
        i = 1;
        j = 1;
        while (counter < n) {
            if (i == 1) {
                j += 1;
                counter++;
                i = j;
                j = 1;
                counter +=(i-1);
            } else if (j == 1) {
                i += 1;
                counter++;
                j = i;
                i = 1;
                counter+=(j-1);
            }
        }
        if(i == 1){
            while (counter>n){
                j--;
                i++;
                counter--;
            }
        }else if(j == 1){
            while (counter>n){
                i--;
                j++;
                counter--;
            }
        }
        cout << "TERM "<< n << " IS "<<i<<'/'<<j<<endl;
    }
    return 0;
}
