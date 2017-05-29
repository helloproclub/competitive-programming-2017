#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string k;
        cin >> k;
        int mid = k.size()/2;
        bool changedFlag = false;
        for(long i=k.size()-1; i >= mid; i--){
            long f = k.size() - i - 1;

            if(k[i] > k[f]) {
                long ii = i - 1;
                while(k[ii] == '9'){
                    ii--;
                }
                k[ii]++;
                for(long iii = (ii+1); iii <i;iii++){
                    k[iii] = '0';
                }

                k[i] = k[f];
                changedFlag = true;
            }

            if(k[i] < k[f]){
                k[i] = k[f];
                changedFlag = true;
            }

            int rem, kint;

            if(!changedFlag && (i == f || f == (i-1))){
                if(k[i] == '9'){
                    rem = 1;
                    k[i] = 0 + '0';

                    if(f == (i-1)){
                        k[f] = 0 + '0';
                    }
                    for(long j=(k.size()/2 + 1); j<k.size(); j++){
                        kint = k[j] - '0';
                        kint += rem;
                        rem = kint / 10;
                        kint = kint % 10;
                        k[j] = kint + '0';
                        k[k.size()-1-j] = kint + '0';
                    }

                    if(rem){
                        k = to_string(rem) + k;
                        k[k.size()-1] = rem + '0';
                    }
                }else{
                    k[i]++;
                    if(f == (i-1)){
                        k[f]++;
                    }
                }
            }
        }

        cout << k << endl;

    }
}
