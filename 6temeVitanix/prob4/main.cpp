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

int prim(int x){

    for(int i=0; i<sqrt(x); i++){
        if(x%i==0){
            return 0;
        }
    }

    return 1;

}

int uprim(int x){

    int i;

    while(true){
        i++;
        if(prim(i)){
            return i;
        }
    }
}

void inloc(int v[], int i){

    v[i]= uprim(v[i]);

}

int main(){

    int n, k;

    int v[1000];
    citire(n, k, v);

    for(int i=0; i<n; i++){

        inloc(v, i);

    }

    afisare(v, n);

}
