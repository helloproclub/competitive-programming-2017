/**
 * Problem Name: Factorial
 * Problem URL: http://www.spoj.com/problems/FCTRL/
 * Reference: https://stackoverflow.com/questions/23977727/the-number-of-trailing-zeros-in-a-factorial-of-a-given-number-ruby
 */

#include<iostream>

using namespace std;

long Z(long N){
    long ret = 0;
    long f = 5;
    long x = 0;
    do{
        x = N/f;
        ret += x;
        f *= 5;
    }while(x > 0);
    return ret;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        cout << Z(n) <<endl;
    }
}
