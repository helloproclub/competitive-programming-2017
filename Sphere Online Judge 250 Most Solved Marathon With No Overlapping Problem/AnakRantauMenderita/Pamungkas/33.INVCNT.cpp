//
// Created by Ki Ageng Satria Pamungkas on 6/7/17.
//
#include <iostream>
#include <algorithm>
using namespace std;
long long getSum(long long BITree[],long long index){
    long long sum = 0;
    while (index > 0){
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum ;
}
void updateBIT(long long BITree[],long long n,long long index,long long val){
//    index = index + 1;
    while (index <= n){
        BITree[index] += val;
        index += index &(-index);
    }
}
void convert(long long arr[], long long n){
    long long temp[n];
    for (long long i = 0; i < n ; ++i) {
        temp[i] =  arr[i];
    }
    sort(temp,temp+n);
    for (long long i = 0; i < n ; ++i) {
        arr[i] = lower_bound(temp,temp+n,arr[i]) - temp + 1;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    long long t, n;
    cin >> t;
    while(t--){
        cout << endl;
        cin >> n;
        long long res = 0;
        long long ar[n];
        long long BITree[n+1];
        BITree[0] = 0;
        for (long long i = 0; i < n; ++i) {
            cin >> ar[i];
            BITree[i+1] = 0;
        }
//        cout << res << endl;
        convert(ar,n);
//        for (long long i = 0; i < n; ++i) {
//            cout << ar[i] << " ";
//        }
//        cout << endl;
        for (long long i = n-1; i >=0 ; i--) {
            res+= getSum(BITree, ar[i]-1);
            updateBIT(BITree, n, ar[i], 1);
//            cout << res << endl;
        }

        cout << res << endl;
    }

    return 0;
}
