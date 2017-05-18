//
// Created by Ki Ageng Satria Pamungkas on 3/30/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long int N,M,jum;
    cin >>N >>M;
    long long int arr[N];
    for (int l = 0; l < N ; ++l) {
        cin>> arr[l];
    }
    jum = 0;
    long int n = sizeof(arr)/sizeof(arr[0]);
    long int sum = M;
    long int curr_sum = arr[0], start = 0, i;
    for (i = 1; i <= n; i++)
    {
        while (curr_sum > sum && start < i-1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        if (curr_sum == sum)
        {
            jum+=1;
        }
        if (i < n)
            curr_sum = curr_sum + arr[i];
    }
    cout << jum << endl;
}
