/**
 * Problem Name: Transform the Expression 
 * Problem URL: http://www.spoj.com/problems/ONP
 */
#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

int priority(char c){
    switch (c) {
        case '+':
            return 1;
            break;
        case '-':
            return 2;
            break;
        case '*':
            return 3;
            break;
        case '/':
            return 4;
            break;
        case '^':
            return 5;
            break;
    }
    return 6;
}
int main(){
    int t;
    
    cin >> t;
    while(t--){
        string s;
        string res = "";
        stack<char> stk;
        cin >> s;
        for(int i=0; i<s.length(); i++){
            if(isalpha(s[i])){
                res += s[i];
            }else{
                if(s[i] == '('){
                    stk.push(s[i]);
                }else if(s[i] == ')'){
                    while(stk.top() != '('){
                        res += stk.top();
                        stk.pop();
                    }
                    stk.pop();
                }else{
                    if(!stk.empty()){
                        if(priority(stk.top()) > priority(s[i])){
                            stk.push(s[i]);
                        }else{
                            while(!stk.empty()){
                                if(priority(stk.top()) < priority(s[i])){
                                    res += stk.top();
                                    stk.pop();
                                }else{
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }

        while(!stk.empty()){
            res += stk.top();
            stk.pop();
        }

        cout << res <<endl;
    }
}
