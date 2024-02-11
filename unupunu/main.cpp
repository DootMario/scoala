#include <bits/stdc++.h>
using namespace std;

int once(int v[], int n){

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]==v[j]){
                return 0;
            }
        }
    }
    return 1;

}

int print(int v[], int n){

    for(int i=0; i<n; i++){
        cout<<v[i];
    }
    cout<<endl;

}

int itv(int x, int v[]){

    int k=0, y=x;

    for(int i=0; i<=9; i++){
        x=y;
        while(x){
            if(x%10==i){
                v[k]=i;
                k++;
                break;
            }
            x=x/10;
        }
    }
    return k;

}

void bt(int v[], int n, int st[], int p, int k=0){



    if(k==p ){
        if(once(st, p)) {
            print(st, p);
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(k==0 && v[i]==0){
                i++;
            }
            st[k]=v[i];
            bt(v, n, st, p, k+1);
        }
    }
}

int main(){

    int x=216, p=2, v[3], st[2];

    int n=itv(x, v);

    bt(v, n, st, p);
    int w[2]={0};
    //cout<<once(w, 2);

}
