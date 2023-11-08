#include <bits/stdc++.h>
using namespace std;

int p1(int n){

    int s=0;

    while(n!=0){
        s=s+n%10;
        n=n/10;
    }

    return s;

}

int p2(int n){

    n=n/10;

    return n;

}

int main(){

    int n, o=0;

    cin>>n;

    while(n!=0){
        if(p1(n)==p1(p2(n))){
            o++;
        }
        n=p2(n);
    }

    cout<<o;

}