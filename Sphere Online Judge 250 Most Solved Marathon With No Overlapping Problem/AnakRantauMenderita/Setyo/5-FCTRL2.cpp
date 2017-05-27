/**
 * Problem Name: Small factorials 
 * Problem URL: http://www.spoj.com/problems/FCTRL2
 */
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> multiply(vector<int> in, int x){
    vector<int> ret;
    int carry = 0;
    for(unsigned int i=0; i<in.size(); i++){
        int h = in[i] * x + carry;
        ret.push_back(h % 10);
        carry = h / 10;
    }

    while(carry){
        ret.push_back(carry % 10);
        carry = carry / 10;
    }

    return ret;
}

string fak(int N){
    if(N == 0) return "1";
    vector<int> ret;
    string out = "";
    ret.push_back(1);
    for(int i=1; i<=N; i++){
        ret = multiply(ret, i);
    }
   
    for(unsigned int i=0; i<ret.size(); i++){
        out = to_string(ret[i]) + out;
    }
    return out;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fak(n) <<endl;
    }
}
