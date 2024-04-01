#include <bits/stdc++.h>
using namespace std;

//void takeout(int n, int v[]){
//    for(int i=0; i<n-1; i++){
//        v[i]=v[i+1];
//    }
//}

void dfs(int n, int v[], int mat[][20], int k=0)
{
    v[k]=1;
    for(int i=0; i<n; i++){
        if (mat[k][i] == 1 && v[i] == 0){
            dfs(n, v, mat, i);
        }
    }
}

int conex(int n, int mat[][20], int v[]){
    dfs(n, v, mat);

    for(int i=0; i<n; i++){
        if(v[i]==0){
            return 0;
        }
    }
    return 1;

}

//int conex(int n, int mat[][20], int x, int been[20], int togo[20], int lb=0, int lt=0){
//
//    int root;
//
//    been[lb]=x+1;
//
//    for(int i=0; i<n; i++){
//        if(mat[x][i]==1){
//            togo[lt]=mat[x][i]+1;
//            lt++;
//        }
//    }
//
//    for(int i=0; i<lt; i++){
//        root=togo[0];
//        takeout(lt, togo);
//        conex(n, mat, root, been, togo, lb+1, lt-1);
//    }
//
//    if(togo[0]==0){
//        if(lb==n){
//            return 1;
//        }
//        return 0;
//    }
//}

int arb(int n, int mat[][20], int v[]){

    int m=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            m=m+mat[i][j];
        }
    }
    m=m/2;

    if(conex(n, mat, v) && m==n-1){
        return 1;
    }
    return 0;
}

void print(int mat[][20], int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}

int comp(int n, int mat[][20], int comp[][20]){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                comp[i][j]=!(mat[i][j]==1);
            }
            else{
                comp[i][j]=0;
            }
        }
    }

}

int main(){

    fstream fin("arbcomp.txt", ios::in);

    int a[3][20], v[20]={0};

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            fin>>a[i][j];
        }
    }

    int b[3][20];

    comp(3, a, b);

    cout<<conex(3, a, v)<<endl;
    cout<<arb(3, a, v)<<endl;

    print(a, 3);

    print(b, 3);

}