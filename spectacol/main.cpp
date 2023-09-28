#include <bits/stdc++.h>
using namespace std;

struct spectacol{
    int ti;
    int tf;
};

int main() {

    int n, ok=0;


    fstream fin("spectacole.in", ios::in);
    fstream fout("spectacole.out", ios::out);

    fin>>n;

    spectacol v[n], aux;

    for(int i=0; i<n; i++){

        fin>>v[i].ti;
        fin>>v[i].tf;

    }

    for(int i=0; i<n; i++){

        cout<<v[i].ti<<" "<<v[i].tf<<endl;

    }

    while (ok==0) {
        for (int i = 0; i < n-1; i++) {
            ok=1;

            if (v[i].ti > v[i + 1].ti) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                ok=0;
            }


        }

    }

    ok=0;

    while (ok==0) {
        for (int i = 0; i < n-1; i++) {
            ok=1;

            if (v[i].ti == v[i + 1].ti) {
                if(v[i].tf > v[i+1].tf) {
                    aux = v[i];
                    v[i] = v[i + 1];
                    v[i + 1] = aux;
                    ok = 0;
                }
            }


        }

    }

    cout << "sortare" << endl;

    for (int i = 0; i < n; i++) {

        cout << v[i].ti << " " << v[i].tf << endl;

    }
    //use 2 pointers to check
    int s=0;
    for(int i=0; i<n-1; i++){
        if(v[i].tf<=v[i+1].ti){
            s++;
        }
        else{
            i++;
        }
    }

    cout<<s;

}
