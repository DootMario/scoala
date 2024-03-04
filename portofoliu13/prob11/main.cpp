/*se considera n cuburi de laturi si culori diverse, sa se construiasca teancuri de cuburi
 * stabile in care nu se repeta culorile
 * se incadreaza in tipul aranjamentelor*/

#include <bits/stdc++.h>
using namespace std;

struct cub{
    int id;
    int lat;
    int col;//nr natural reprezentand culoarea
};

void init(cub a, int id, int lat, int col){
    a.id=id;
    a.lat=lat;
    a.col=col;
}

void print(cub v[], int n){
    for(int i=0; i<n; i++){
        cout<<"( "<<v[i].id<<" "<<v[i].lat<<" "<<v[i].col<<" )`";
    }
    cout<<endl;
}

int stable(cub v[], int n){
    for(int i=0; i<n-1; i++){
        if(v[i].lat>=v[i+1].lat){
            return 0;
        }
    }
    return 1;
}

int check(cub v[], int n){
    for(int i=0; i<n-1; i++){
        if(v[i].col==v[i+1].col){
            return 0;
        }
    }
    return 1;
}

int once(cub v[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i=1; j<n; j++){
            if(v[i].id==v[j].id){
                return 0;
            }
        }
    }
    return 1;
}

void bt(cub sol[], cub bag[], int n, int h, int k=0){
    if(k==h){
        if(check(sol, n) && once(sol, n) && stable(sol, n)){
            print(sol, n);
        }
    }
    else{
        for(int i=0; i<n; i++){
            sol[k].id=bag[i].id;
            sol[k].lat=bag[i].lat;
            sol[k].col=bag[i].col;
            bt(sol, bag, n, k+1);
        }
    }
}

int main() {

    cub bag[3], sol[3];

    for(int i=0; i<3; i++){
        init(bag[i], i, i+1, i*2);
    }

    bt(sol, bag, 3, 3);

}
