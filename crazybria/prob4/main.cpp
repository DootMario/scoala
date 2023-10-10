#include <bits/stdc++.h>
using namespace std;



int main() {

    int m[10][10], x, y, n=0;

    fstream fin("SAH.IN", ios::in);

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            fin>>m[i][j];
        }
    }

    cin>>x>>y;

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if((x+y==i+j || x-y==i-j)&&m[i][j]==1){
                n++;
            }
        }
    }

    if(n==0){
        cout<<"nu sunt obstacole";
    }

    cout<<n;

}
