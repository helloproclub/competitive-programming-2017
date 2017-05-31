//
// Created by Ki Ageng Satria Pamungkas on 5/31/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct node{
    long info;
    vector <long> edsrc;
    vector <long> eddest;
};
bool isTree(long parent,vector <long> &visited, node nodes[] ){
    bool nocycle = true;
    visited.push_back(parent);
    for (int i = 0; i <nodes[parent].eddest.size() ; ++i) {
//        for (int j = 0; j <visited.size() ; ++j) {
//            cout << visited[j];
//        }
//        cout << endl;
//        cout << nodes[parent].eddest[i] << endl;
        if(find(visited.begin(),visited.end(),nodes[parent].eddest[i])!=visited.end()){
            nocycle = false;
            break;
        }else{
            nocycle = isTree(nodes[parent].eddest[i],visited,nodes);
        }
    }
    return nocycle;
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
        nodes[x].eddest.push_back(y);
        nodes[y].edsrc.push_back(x);
    }
    if(N-1 != M){
        damn = false;
    }
    vector <long> visited;
    if(damn){
        damn = isTree(1, visited, nodes);
    }
    if(damn){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

//    for (int i = 1; i <=N ; ++i) {
//        cout<< i <<" Neighbour :"<<endl;
//        for (int j = 0; j <nodes[i].edges.size() ; ++j) {
//            cout<< nodes[i].edges[j]->info<<" ";
//        }
//        cout << endl;
//    }
}