#include <bits/stdc++.h>
using namespace std;

int enough(int mat[][14], int n){
    int t=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j]==1){
                t++;
            }
        }
    }
    if(t==n){
        return 1;
    }
    return 0;

}

int inter(int mat[][14], int n, int x, int y){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            if(i==x && j==y){
                j++;
            }

            else if(mat[i][j]==1){
                if(i==x || j==y){
                    return 0;
                }
            }

        }
    }
    return 1;

}

void print(int mat[][14], int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j]){
                cout<<"T ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    cout<<endl;

}

int check(int mat[][14], int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j]==1 && inter(mat, n, i, j)==0){
                return 0;
            }
        }
    }
    return 1;

}

void bt(int sol[][14], int n, int k=0, int l=0){

    if(k==n-1 && l==n){
        if(check(sol, n) && enough(sol, n)){
            print(sol, n);
        }
    }
    else{

        if(l==n){
            k++;
            l=0;
        }

        for(int i=0; i<=1; i++){
            sol[k][l]=i;
            bt(sol, n, k, l+1);
        }

    }

}

int main() {

    int sol[2][14];

    int test[2][14]={0};

//    test[0][0]=1;
//    test[0][1]=1;

//    print(test, 2);

//    for(int i=0; i<2; i++){
//        for(int j=0; j<2; j++){
//            cout<<i<<" "<<j<<" "<<inter(test, 2, i, j)<<endl;
//        }
//    }

//    cout<<check(test, 2);

//    int sol[2][14] = {0};

    bt(sol, 2);
}