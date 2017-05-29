#include<iostream>
#include<map>
#include<cmath>
using namespace std;

map<long long int, long long int> m;
long long int coins(long long int a){
    if(a ==0 ) return 0;
    else if(a == 1) return 1;
    else if(a == 2) return 2;
    else{
        map<long long int, long long int>::iterator it = m.find(a);
        if(it != m.end()){
            return it->second;
        }else{
            long long int q = coins(floor(a/2)) + coins(floor(a/3)) + coins(floor(a/4));
            if(q > a){
                m[a] = q;
            }else{
                m[a] = a;
            }

            return m[a];
        }
    }
}

int main(){
    long long int n;
    while(scanf("%lld", &n) != EOF){
        cout << coins(n) << endl;
    }
}
