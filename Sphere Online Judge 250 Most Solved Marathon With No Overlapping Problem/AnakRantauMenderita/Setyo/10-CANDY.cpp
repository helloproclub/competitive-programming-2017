/**
 * Problem Name: Candy I
 * Problem URL: http://www.spoj.com/problems/CANDY
 */
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n != -1){
        vector<int> a;
        int jum = 0;
        for(int i=0; i<n; i++){
            int tmp;
            cin >> tmp;
            jum += tmp;
            a.push_back(tmp);
        }

        if((jum % n) == 0){
            int rata = jum / n;
            int count = 0;
            for(unsigned int i=0; i<a.size(); i++){
                if(a[i] < rata){
                    count += rata - a[i];
                }
            }

            cout << count << endl;
        }else{
            cout << "-1" << endl;
        }
        cin >> n;
    }
}
