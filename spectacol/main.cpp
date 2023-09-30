#include <bits/stdc++.h>
using namespace std;

///353

struct spectacol{
    int ti;
    int tf;
};

int main() {

    int n, ok=0, i, j=1;


    fstream fin("spectacole.in", ios::in);
    fstream fout("spectacole.out", ios::out);

    fin>>n;

    spectacol v[n], aux;

    for(i=0; i<n; i++){

        fin>>v[i].ti;
        fin>>v[i].tf;

    }

    for(i=0; i<n; i++){

        cout<<v[i].ti<<" "<<v[i].tf<<endl;

    }

    while (ok==0) {
        ok=1;

        for (i = 0; i < n-1; i++) {
            if (v[i].tf > v[i + 1].tf) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                ok=0;
            }


        }

    }

    ok=0;

    while (ok==0) {
        ok=1;

        for (i = 0; i < n-1; i++) {
            if (v[i].tf == v[i + 1].tf) {
                if(v[i].ti > v[i+1].ti) {
                    aux = v[i];
                    v[i] = v[i + 1];
                    v[i + 1] = aux;
                    ok = 0;
                }
            }
        }

    }

    cout << "sortare" << endl;

    for (i = 0; i < n; i++) {

        cout << v[i].ti << " " << v[i].tf << endl;

    }
    //use 2 pointers to check
    i=0;
    int s=0;
    while(j<=n){
        if(v[i].tf<=v[j].ti){
            s++;
            i=j;
            j++;
        }
        else{
            j++;
        }

    }

    fout<<s;

}
