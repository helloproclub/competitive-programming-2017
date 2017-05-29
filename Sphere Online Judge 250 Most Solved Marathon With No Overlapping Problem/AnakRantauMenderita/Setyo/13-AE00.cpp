#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long t;
    cin >> t;
    long long s = t;
    for(int i=2; i<=t;i++){
        for(int j=i; j<=t; j++){
            if((i * j) <= t){
                s++;
            }
        }
    }

    cout << s << endl;
}
