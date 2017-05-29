#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t != 0){
        string s, res = "";
        int currentIdx = 0;
        cin >> s;
        int row = s.length() / t;
        int base = -1, sub = -1;
        bool ssflag = false;
        int pos = 0;
        for(int i=0; i<s.length(); i++){
            if(i % row != 0){
                if(!ssflag){
                    pos += t * 2 - sub;
                }else{
                    pos += sub;
                }
                ssflag = !ssflag;
            }else{
                base++;
                sub += 2;
                pos = base;
                ssflag = false;
            }
            
            res += s[pos];
        }

        cout << res << endl;
        cin >> t;
    }
}
