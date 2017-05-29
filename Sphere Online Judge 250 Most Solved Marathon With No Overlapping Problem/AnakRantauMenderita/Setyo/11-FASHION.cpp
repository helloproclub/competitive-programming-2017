#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int sum = 0;
        vector<int> m, w;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            m.push_back(x);
        }

        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            w.push_back(x);
        }
        
        sort(m.begin(), m.end());
        sort(w.begin(), w.end());

        for(int i=0; i<n; i++){
            sum += m[i] * w[i];
        }

        cout << sum << endl;
    }
}
