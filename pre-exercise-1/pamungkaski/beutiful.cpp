//
// Created by Ki Ageng Satria Pamungkas on 3/26/17.
//
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main(){
    long int i,j,k,ans,temp;
    string dummy;
    cin>>i>>j>>k;
    for (int l = i; l <=j ; ++l) {
        dummy= to_string(l);
        reverse(dummy.begin(),dummy.end());
        temp= stol(dummy);
        if(((abs(l-temp))%k)==0){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
