/**
 * Problem Name: Prime Generator
 * Problem URL: http://www.spoj.com/problems/PRIME1/
 */
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(long a){
    for(long i=2; i<=sqrt(a); i++){
        if((a % i)==0) {
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long a, b;
        cin >> a >> b;
        if (a<2) a = 2;
        for(long i=a; i<=b; i++){
            if (isPrime(i)) {
                cout << i <<endl;
            }
        }
    }
}
