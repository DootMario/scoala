#include <bits/stdc++.h>
using namespace std;

struct ghiozdan{

    int v, m;
    float r;

};

int main() {

    int n, ok=0, cap, furt=0;

    cin>>n>>cap;

    ghiozdan stoc[n], aux;

    for(int i=0; i<n; i++){
        cin>>stoc[i].m>>stoc[i].v;
        stoc[i].r=stoc[i].v/(stoc[i].m*1.0);
    }

    if(n>1) {
        while (ok == 0) {
            ok = 1;
            for (int i = n - 1; i > 0; i--) {
                if (stoc[i].r > stoc[i - 1].r) {
                    aux = stoc[i];
                    stoc[i] = stoc[i - 1];
                    stoc[i - 1] = aux;
                    ok = 0;
                }
            }
        }

        ok = 0;

        while (ok == 0) {
            ok = 1;
            for (int i = n - 1; i > 0; i--) {
                if (stoc[i].r == stoc[i - 1].r) {
                    if (stoc[i].m > stoc[i - 1].m) {
                        aux = stoc[i];
                        stoc[i] = stoc[i - 1];
                        stoc[i - 1] = aux;
                        ok = 0;
                    }
                }
            }
        }
    }

    for(int i=0; i<n; i++){

        if(stoc[i].m<=cap){
            cap=cap-stoc[i].m;
            furt=furt+stoc[i].v;
        }
        else{
            furt=furt+stoc[i].r*cap;
            break;
        }

    }

    cout<<furt;

}
