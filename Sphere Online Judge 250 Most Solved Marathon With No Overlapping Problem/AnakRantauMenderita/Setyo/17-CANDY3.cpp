#include <iostream>

#define ull unsigned long long int
using namespace std;

int main(){
    ull t;
    cin >> t;
    while(t--){
        getchar();
        ull n, sum = 0;
        cin >> n;
        for(ull i=0; i<n; i++){
            ull nn;
            cin >> nn;
            sum += nn % n;
        }

        if((sum % n) == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
