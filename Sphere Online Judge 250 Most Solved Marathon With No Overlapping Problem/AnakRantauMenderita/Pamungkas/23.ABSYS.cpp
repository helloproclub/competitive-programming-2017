//
// Created by Ki Ageng Satria Pamungkas on 5/30/17.
//

#include <iostream>

using namespace std;

bool cari(string s, char x){
    bool nai = true;
    for (int i = 0; i <s.size() ; ++i) {
        if(s[i] == x){
            nai = false;
            break;
        }
    }
    return nai;
}
int main(){
    ios_base::sync_with_stdio(0);
    int n, a, b, c, counter,spaces;
    string s, dmy;

    cin >> n;
    counter = 0;
    while((counter < n)){
        getline(cin,s);
        if(s == ""){
            continue;
        }else{
            counter++;
            //cout << s << endl;
            spaces = 0;
            dmy = "";
            for (int i = 0; i <s.size() ; ++i) {
                if(s[i] == ' '){
                    //cout << spaces << endl;
                    if(spaces == 0){
                        if (!cari(dmy,'m')){
                            a = -1;
                        }else{
                            a = stoi(dmy);
                        }
                        dmy="";
                    }
                    if(spaces == 2){
                        //cout << (cari(dmy,'m')) << endl;
                        if (!cari(dmy,'m')){
                            b = -1;
                        }else{
                            b = stoi(dmy);
                        }
                        dmy="";
                    }
                    spaces++;
                } else if((spaces == 0)or(spaces == 2)or(spaces == 4)) {
                    dmy += s[i];
                }
                //3247 + machula = 3749
                if(i == s.size()-1){
                    //cout << dmy << endl;
                    if (!cari(dmy,'m')){
                        c = -1;
                    }else{
                        c = stoi(dmy);
                    }
                    dmy="";
                }
            }
            //cout << a <<" + "<< b <<" = " << c << endl;
            if( a == -1){
                a = c - b;
            } else if (b == -1){
                b = c - a;
            } else if (c == -1){
                c = a + b;
            }
            cout << a <<" + "<< b <<" = " << c << endl;
            //cin.clear();
        }
    }
}