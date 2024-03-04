#include <bits/stdc++.h>
using namespace std;

int check(int v[], int n){
    for(int i=0; i<n-1; i++){
        if(abs(v[i]-v[i+1])!=2 && abs(v[i]-v[i+1])!=3){
            return 0;
        }
    }
    return 1;
}

int once(int n, int v[]){

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]==v[j]){
                return 0;
            }
        }
    }
    return 1;
}

int print(int n, int v[]){

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void bt(int sol[], int n, int k=0){
    if(k==n){
        if(check(sol, n) && once(n, sol)){//nuj ce se intampla aici dar nu e de bine
            print(n, sol);
        }
    }
    else{
        for(int i=1; i<=n; i++){
            sol[k]=i;
            bt(sol, n,k+1);
        }
    }
}

int main() {

    int sol[4];

    bt(sol, 4);

}
