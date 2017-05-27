/**
 * Problem Name: Adding Reversed Numbers 
 * Problem URL: http://www.spoj.com/problems/ADDREV
 */
#include<iostream>

using namespace std;

int rev(int a){
    int ret = 0;
    while(a != 0){
        ret *= 10;
        ret += (a % 10);
        a = a / 10;
    }
    return ret;
}

int main(){
    int N;
    cin >> N;
    while(N--){
        int a, b;
        cin >> a >> b;
        cout << rev(rev(a) + rev(b)) <<endl;
    }
}
