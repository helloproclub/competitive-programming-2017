//
// Created by Ki Ageng Satria Pamungkas on 5/26/17.
//
#include <iostream>
#include <string>

using namespace std;

int main(){
    int t,head1, head2;
    string s,tokens;
    char T;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> s;
        head1 = 0;
        head2 = 0;
        tokens = "";
        while(head1 < s.length()){
            if((s[head1] == '+')||(s[head1] == '-')||(s[head1] == '*')||(s[head1] == '/')||(s[head1] == '^')||(s[head1] == '(')||(s[head1] == ')')){
                T = s[head1];
                head1++;
                if(T == ')'){
                    while(tokens[head2]!='('){
                        cout<<tokens[head2];
                        head2--;
                    }
                    head2--;
                }else if (T == '^'){
                    head2++;
                    tokens[head2] = T;
                }else if (T == '('){
                    head2++;
                    tokens[head2] = T;
                }else if(T == '/'){
                    if(tokens[head2] != '^'){
                        head2++;
                        tokens[head2] = T;
                    }else{
                        while(tokens[head2]=='^'){
                            cout << tokens[head2];
                            head2--;
                        }
                    }
                }else if(T == '*'){
                    if((tokens[head2]!='/')&&(tokens[head2]!='^')){
                        head2++;
                        tokens[head2] = T;
                    }else{
                        while ((tokens[head2]!='/')||(tokens[head2]!='^')){
                            cout << tokens[head2];
                            head2--;
                        }
                    }
                }else if(T == '-'){
                    if((tokens[head2]!='/')&&(tokens[head2]!='^')&&(tokens[head2]!='*')){
                        head2++;
                        tokens[head2] = T;
                    }else{
                        while ((tokens[head2]!='/')||(tokens[head2]!='^')||(tokens[head2]!='*')){
                            cout << tokens[head2];
                            head2--;
                        }
                    }
                }else if(T == '+'){
                    if((tokens[head2]!='/')&&(tokens[head2]!='^')&&(tokens[head2]!='*')&&(tokens[head2]!='-')){
                        head2++;
                        tokens[head2] = T;
                    }else{
                        while ((tokens[head2]!='/')||(tokens[head2]!='^')||(tokens[head2]!='*')||(tokens[head2]!='+')){
                            cout << tokens[head2];
                            head2--;
                        }
                    }
                }
            }else{
                cout << s[head1];
                head1++;
            }

        }
        while(head2!=0){
            cout<< tokens[head2];
            head2--;
        }
        cout<<endl;
    }
    return 0;
}
