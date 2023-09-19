#include <bits/stdc++.h>
using namespace std;
///prob 1866
int main() {

    fstream fin("prosir.in", ios_base::in);
    fstream fout("prosir.out", ios_base::out);

    char s[201], dont[]=".,!? ";

    fin.getline(s, 201);
    int n= strlen(s);

    for(int i=0; i<n; i++){
        if(strchr(dont, s[i])==NULL && strchr(dont, s[i+1])!=NULL){
            s[i]='5';
        }
    }

    fout<<s;
    fout.close();
}
