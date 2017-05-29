//
// Created by Ki Ageng Satria Pamungkas on 5/29/17.
//
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>

using namespace std;

int main(){
    string s,dmy;
    cin >> s;
    while((s[0] != '0')or(s.length() != 1)){
        vector <int64_t> dp(s.length()+1);
        fill(dp.begin(),dp.end(),0);
        dp[0] = 1;
        if(s[0] !='0'){
            dp[1] = 1;
        }
        for (int i = 1; i <s.length(); ++i) {
            if(s[i]!='0'){
                dp[i+1] = dp[i];
            }
            dmy = "";
            dmy = dmy + s[i-1] +s[i];
//            cout << dmy << endl;
            if(dmy[0] != '0'){
                if(dmy[0] == '2'){
                    if(dmy[1]<='6'){
                        dp[i+1]+=dp[i-1];
                    }
                }else if(dmy[0] == '1'){
                    dp[i+1]+=dp[i-1];
                }
            }
        }
//        for (int j = 0; j <dp.size() ; ++j) {
//            cout << dp[j];
//        }
//        cout << endl;
        cout << dp[s.length()] << endl;
        cin >> s;
        dp.clear();
    }
}
