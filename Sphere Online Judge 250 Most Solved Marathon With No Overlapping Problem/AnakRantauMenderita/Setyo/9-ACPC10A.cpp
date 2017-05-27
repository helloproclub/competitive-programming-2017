/**
 * Problem Name: What’s Next
 * Problem URL: http://www.spoj.com/problems/ACPC10A
 */
#include<iostream>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    while((a != 0) || (b != 0) || (c != 0)){
        //Is Arithmetic
        if((b-a) == (c-b)){
            cout << "AP " << c + (b-a) << endl;
        }else{
            if((a == 0) || (b == 0) || (c == 0)){
                cout << "GP 0" << endl;
            }else{
                cout << "GP " << c * (b/a) << endl;
            }
        }
        cin >> a >> b >> c;
    }
}
