#include <bits/stdc++.h>
using namespace std;

///987

int suma(int x[][100], int n, int p){

    int sum=0;

    for(int i=0; i<n; i++){
        sum = sum + x[p][i];
    }

    return sum;
}

int main() {

    fstream fin("matrice4.in", ios::in);
    fstream fout("matrice4.out", ios::out);

    int n;

    fin>>n;

    int x[n][100];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            fin>>x[i][j];
        }
    }

    for(int i=0; i<n; i++){
        if(suma(x, n, i)%2==0){
            fout<<suma(x, n, i)<<" ";
        }
    }

}
