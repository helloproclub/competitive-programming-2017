/**
 * Problem Name: Number Steps  
 * Problem URL: http://www.spoj.com/problems/NSTEPS
 */
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int x, y;
        cin >> x >> y;

        if((x == y) || ((x-2) == y)){
           cout << (((x % 2) == 1) ? (x+y-1) : (x+y)) << endl; 
        }else{
            cout << "No Number" << endl;
        }
    }
}
