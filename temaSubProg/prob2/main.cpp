#include <bits/stdc++.h>
using namespace std;

int issq(int x){

    int sq= sqrt(x);
    return sq*sq==x;

}

int fibo(int x){

    if(issq(5*x*x+4)||issq(5*x*x-4)){
        return 1;
    }
    return 0;

}

int main() {

    fstream fin("fiboverif1.in", ios::in);
    fstream fout("fiboverif1.out", ios::out);

    int n, x;

    fin>>n;

    for(int i=0; i<n; i++){
        fin>>x;
        if(fibo(x)){
            fout<<x<<" ";
        }
    }

    fout.close();

}
