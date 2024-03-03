/*se da un nr n si nr v, sa se afiseze sirurile cu numere de la 1 la n,
 a caror diferenta intre nr este mai mare decat v*/


#include <bits/stdc++.h>
using namespace std;

//functie care printeaza solutii
int print(int n, int v[]){

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

//functie care verifica nerepetarea elementelor
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

//functie care verifica validitatea solutiilor prin diferenta elementelor in modul
int check(int nr, int n, int v[]){
    for(int i=0; i<n-1; i++){
        if(abs(v[i]-v[i+1])<=nr){
            return 0;
        }
    }
    return 1;
}

//functie recursiva care genereaza permutarile multimi de n numere care indeplinesc conditiile
void bt(int sol[], int n, int v, int k=0){

    if(k==n){
        if(check(v, n, sol) && once(n, sol)){
            print(n, sol);
        }
    }
    else{
        for(int i=1; i<=n; i++){
            sol[k]=i;
            bt(sol, n, v, k+1);
        }
    }
}

int main() {

    int sol[4];

    bt(sol, 4, 1);

}
