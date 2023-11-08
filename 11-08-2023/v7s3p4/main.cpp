#include <bits/stdc++.h>
using namespace std;

int sub(int n){

    if(n<6){
        return n;
    }
    if(n>=6){
        return pow(2, (int)log2(n/5))*5;
    }

}

int main(){

    int s;

    cin>>s;

    while(s>0){

        cout<<sub(s)<<" ";
        s=s-sub(s);

    }

}