#include<iostream>
#include<map>
#include<cmath>
#include <string>
#include <vector>

using namespace std;

string div2(string a){
    string ret = "";
    int rem = 0, d, s;
    for(int i=0; i<a.size(); i++){
        d = (rem * 10) + (a[i] - '0');
        rem = d % 2;
        s = d/2;
        ret += to_string(s);
    }
    while(ret[0]=='0' && ret.length()!=1)
        ret.erase(0,1);
    return ret;
}

string add(string a, string b){
    string ret = "";
    int rem = 0, j;

    while (!a.empty() || !b.empty()){
        j = 0;
        if(!a.empty()){
            j += a.back() - '0';
            a.pop_back();
        }

        if(!b.empty()){
            j += b.back() - '0';
            b.pop_back();
        }
        j += rem;
        rem = j / 10;

        ret = to_string(j % 10) + ret;
    }
    if(rem)
        ret = to_string(rem) + ret;

    return ret;
}

string sub(string a, string b){
    string ret = (a.length()>b.length())? a : b;
    int differenceInLength = abs((int)(a.size() - b.size()) );

    if(a.size() > b.size())
        b.insert(0, differenceInLength, '0');

    else
        a.insert(0, differenceInLength, '0');


    for(int i=a.length()-1; i>=0; --i) {
        if(a[i] < b[i]) {
            if(i>0){
                a[i] += 10;
                a[i-1]--;
            }
        }
        ret[i] = ((a[i]-'0')-(b[i]-'0')) + '0';
    }

    while(ret[0]=='0' && ret.length()!=1)
        ret.erase(0,1);

    return ret;
}

int main(){
    for(int i=0; i<10; i++){
        string a, b;
        cin >> a;
        cin >> b;
        string sum = add(a, b);
        string k = div2(sum);
        string n = sub(k, b);
        cout << k << endl;
        cout << n << endl;
    }
}
