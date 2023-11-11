#include <bits/stdc++.h>
using namespace std;

///1001

int same(int v[], int w[], int n){

    for(int i=0; i<n; i++){
        if(v[i]!=w[i]){
            return 0;
        }
    }

    return 1;

}


void rotate(int v[], int n, int d=0){

    if(d==0) {
        int aux = v[n - 1];

        for (int i = n - 1; i > 0; i--) {
            v[i] = v[i - 1];
        }

        v[0] = aux;
    }
    else{
        int aux = v[0];

        for (int i = 0; i < n; i++) {
            v[i] = v[i+1];
        }

        v[n-1] = aux;
    }

}

int rotund(int n){

    int l= floor(log10(n))+1;

    int v[l], w[l];

    for(int i=0; i<l; i++){
        v[i]=int(n/pow(10, i))%10;
        w[i]=v[i];
    }

    rotate(w, l);

    for(int i=0; i<l-1; i++){
        if(same(v, w, l)){
            return 1;
        }
        rotate(w, l);
    }

    return 0;

}

int main() {

    fstream fin("rotund.in", ios::in);
    fstream fout("rotund.out", ios::out);

    int n, j=0, x;

    fin>>n;
    fout<<endl;

    for(int i=0; i<n; i++){
        fin>>x;
        if(rotund(x)){
            fout<<" "<<x;
            j++;
        }
    }

    fout.seekg(0, ios::beg);

    fout<<j<<endl;


    fout.close();

}