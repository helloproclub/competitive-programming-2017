//
// Created by Ki Ageng Satria Pamungkas on 5/31/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct node{
    long info;
    vector <long> con;
};
vector <long> visited;
void dfs(long parent, node nodes[] ){
    visited.push_back(parent);
    for (int i = 0; i <nodes[parent].con.size() ; ++i) {
        if(find(visited.begin(),visited.end(),nodes[parent].con[i])==visited.end()) {
            dfs(nodes[parent].con[i], nodes);
        }
    }
}
int main(){
    long M, N, x, y;
    cin >> N >> M;
    node nodes[N+1];
    bool damn = true;
    for (int i = 1; i <=N ; ++i) {
        nodes[i].info = i;
    }
    for (int i = 0; i <M ; ++i) {
        cin >> x >> y;
        if( x==y ){
            damn = false;
        }
        nodes[x].con.push_back(y);
        nodes[y].con.push_back(x);
    }
    if(N-1 != M){
        damn = false;
    }
    dfs(1,nodes);
    if(visited.size()!=N){
        damn = false;
    }
    if(damn){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}