#include <bits/stdc++.h>
using namespace std;

void C(bool mat[][300], int x, int n){

    for(int i=0; i<n; i++){
        mat[i][x]=!mat[i][x];
    }

}

void L(bool mat[][300], int x, int n){

    for(int i=0; i<n; i++){
        mat[x][i]=!mat[x][i];
    }

}

void Matrix(bool mat[][300], int n, int l[], int c[], int k){

    for(int i=0; i<k; i++){
        L(mat, l[i], n);
        C(mat, c[i], n);
    }

}

int main(){

    fstream fin("crazyMat.in", ios::in);
    fstream fout("crazyMat.out", ios::out);

    int n, k;

    fin>>n;

    bool mat[n][300]={false};

    fin>>k;

    int l[k], c[k];

    for(int i=0; i<k; i++){
        fin>>l[i];
        fin>>c[i];
    }

    Matrix(mat, n, l, c, k);


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            fout<<mat[i][j]<<" ";
        }
        fout<<endl;
    }

    fout.close();

}