//
// Created by Ki Ageng Satria Pamungkas on 4/2/17.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int  main(){
    long int T, A, B, min,jar1,ind;
    string nama;
    struct pos{
        long int posx,posy;
    };
    struct driver{
        string nama;
        pos awal;
    };
    struct order{
        pos awal;
        pos akhir;
    };
    driver lisDri[100];
    order lisOrder;
    string casa[100];
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> A >> B;
        for (int j = 0; j < A ; ++j) {
            cin >> lisDri[j].nama >> lisDri[j].awal.posx >> lisDri[j].awal.posy;
        }
        for (int j = 0; j < B ; ++j) {
            cin >> lisOrder.awal.posx >> lisOrder.awal.posy >> lisOrder.akhir.posx >>lisOrder.akhir.posy;
            min =  abs(lisOrder.awal.posx-lisDri[0].awal.posx)+abs(lisOrder.awal.posy-lisDri[0].awal.posy);
            nama = lisDri[0].nama;
            ind = 0;
            for (int k = 1; k < A; ++k) {
                jar1 =  abs(lisOrder.awal.posx-lisDri[k].awal.posx)+abs(lisOrder.awal.posy-lisDri[k].awal.posy);
                if(jar1 < min ){
                    nama = lisDri[k].nama;
                    min = jar1;
                    ind = k;
                }else if(jar1 == min){
                    if (lisDri[k].nama < nama){
                        nama = nama = lisDri[k].nama;
                        min = jar1;
                        ind = k;
                    }
                }
            }
            lisDri[ind].awal.posx = lisOrder.akhir.posx;
            lisDri[ind].awal.posy = lisOrder.akhir.posy;
            casa[j] = nama;
        }
        cout << "Case #" << i + 1 << ":" << endl;
        for (int j = 0; j < B ; ++j) {
            cout << casa[j]<<endl;
        }
    }
}
