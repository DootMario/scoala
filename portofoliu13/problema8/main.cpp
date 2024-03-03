/*sa se genereze toate matricile patratice binare de marime n care au un 0 pe coloana*/

#include <bits/stdc++.h>
using namespace std;


void print(int mat[][100], int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}

int iso(int col[], int n){

    int nr=0;

    for(int i=0; i<n; i++){
        if(col[i]==0){
            nr++;
        }
    }
    if(nr!=1){
        return 0;
    }
    return 1;
}

int check(int mat[][100], int n){

    int col[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            col[i]=mat[i][j];
        }

        if(iso(col, n)==0){
            return 0;
        }

    }

    return 1;
}

int bt(int sol[][100], int n, int k=0, int l=0){

    if(k==l && l==n-1){
        if(check(sol, n)){
            print(sol, n);
        }
    }
    else{
        if(k==n){
            k=0;
            l++;
        }
        for(int i=0; i<=1; i++){
            sol[k][l]=i;
            bt(sol, n, k+1, l);
        }
    }
}

int main() {

    int sol[100][100];

    int test[100][100];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            test[i][j]=1;
        }
    }

//    cred ca am incurcat coloana cu linia undeva dar nu stiu unde

//    test[0][0]=0;
//    test[1][0]=0;
//    test[0][2]=0;

    bt(sol, 3);
//    print(test, 3);
//    cout<<check(test, 3);

}
