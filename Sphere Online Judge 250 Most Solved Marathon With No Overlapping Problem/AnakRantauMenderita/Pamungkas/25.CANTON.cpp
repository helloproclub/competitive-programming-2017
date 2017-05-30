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
                while ((j != 1) and(counter<n)){
                    i++;
                    j--;
                    counter++;
                }
            } else if (j == 1) {
                i += 1;
                counter++;
                while ((i != 1)and(counter<n)) {
                    j++;
                    i--;
                    counter++;
                }
            }
        }
        cout << "TERM "<< n << " IS "<<i<<'/'<<j<<endl;
    }
    return 0;
}
