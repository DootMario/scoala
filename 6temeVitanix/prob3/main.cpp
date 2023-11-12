#include <bits/stdc++.h>
using namespace std;

///4256

void citire(int &n, int &k, int v[]){

    cin>>n;
    cin>>k;

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

}

void afisare(int v[], int n){

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

}

void oglindire(int v[], int st, int dr){
    int w[dr-st+1];

    for(int i=0; i<dr-st+1; i++){
        w[i]=v[st+i];
    }

    for(int i=0; i<(dr-st+1)/2; i++){
        int aux=w[i];
        w[i]=w[dr-st-i];
        w[dr-st-i]=aux;
    }

    for(int i=0; i<dr-st+1; i++){
        v[st+i]=w[i];
    }

}

int main(){

    int n, k;

    int v[1000];
    citire(n, k, v);

    for(int i=1; i<n/k+1; i++){
        oglindire(v, (i-1)*k, i*k-1);
    }

    afisare(v, n);

}
