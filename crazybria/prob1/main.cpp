#include <bits/stdc++.h>
using namespace std;

struct tara{

    char name[100], col[100];

};

int main() {

    fstream fin("TARI.IN", ios::in);

    int n;

    cin>>n;
    cin.get();

    tara v[n];

    for(int i=0; i<n; i++){

        cin>>v[i].name;
        fin.getline(v[i].col, 100);

    }

    cin.get();

    char cf[31];

    cin.getline(cf, 31);

    for(int i=0; i<n; i++){
        if(strstr(v[i].col, cf)!=NULL){
            cout<<v[i].name<<endl;
        }
    }

}
