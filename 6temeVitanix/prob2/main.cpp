#include <bits/stdc++.h>
using namespace std;

///4255

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
            v[i] = v[i + 1];
        }

        v[n-1] = aux;
    }

}

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

void permutare(int v[], int st, int dr){
    int w[dr-st+1];

    for(int i=0; i<dr-st+1; i++){
        w[i]=v[st+i];
    }

    rotate(w, dr-st+1, 1);

    for(int i=0; i<dr-st+1; i++){
        v[st+i]=w[i];
    }

}

int main(){

    int n, k;

    int v[1000];
    citire(n, k, v);

    for(int i=1; i<k+1; i++){
        permutare(v, (i-1)*(n/k), i*(n/k)-1);
    }

    afisare(v, n);


}
