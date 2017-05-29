#include<iostream>
#include<cmath>

using namespace std;

int ex(int a, int b){
    if (b == 0) return 1;
    int md = b % 4;
    if (md == 0){
        md = 4;
    }

    return ((int)pow(a, md) % 10);
} 

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << ex(a, b) <<endl;
    }
}
