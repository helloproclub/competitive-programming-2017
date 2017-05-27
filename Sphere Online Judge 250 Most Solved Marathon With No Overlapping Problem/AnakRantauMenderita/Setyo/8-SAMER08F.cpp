/**
 * Problem Name: Feynman 
 * Problem URL: http://www.spoj.com/problems/SAMER08F
 * Reference: https://www.quora.com/How-do-you-calculate-the-number-of-squares-in-an-n-x-n-square-grid
 */
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n != 0){
        cout << (n * (n+1) * (2*n+1))/6 <<endl;
        cin >> n;
    }
}
