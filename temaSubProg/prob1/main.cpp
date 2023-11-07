#include <bits/stdc++.h>
using namespace std;

///1644

void print(int v[], int n){

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

}

void rotate(int v[], int n, int d){

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

int pal(int v[], int n){

    for(int i=0; i<n/2; i++){
        if(v[i]!=v[n-1-i]){
            return 0;
        }
    }

    return 1;

}

int same(int v[], int w[], int n){

    for(int i=0; i<n; i++){
        if(v[i]!=w[i]){
            return 0;
        }
    }

    return 1;

}

int main() {

    fstream fin("palindrom_ciclic.in", ios::in);
    fstream fout("palindrom_ciclic.out", ios::out);

    int n;

    fin>>n;

    int v[n], w[n];

    for(int i=0; i<n; i++){

        fin>>v[i];
        w[i]=v[i];

    }

    if(pal(v, n)){
        fout<<"DA 0";
        return 0;
    }

    rotate(w, n, 0);

    int i=1;

    while(!same(v, w, n)==1){

        if(pal(w, n)){
            fout<<"DA "<<i;
            fout.close();
            return 0;
        }

        i++;

        rotate(w, n, 0);

    }

    fout<<"NU";
    fout.close();

}
