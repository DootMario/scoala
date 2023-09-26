#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[100], p[100];

    cin.getline(s, 100);

    ///pt1
    for(int i=0; i< strlen(s); i++){
        cout<<s+i<<endl;
    }

    ///pt2
    for(int i= strlen(s)-1; i>=0; i--){
        strncpy(p, s, i);
        p[i]=NULL;
        cout<<p<<endl;
    }

    ///pt3
    for(int i=1; i<ceil(strlen(s)*1.0/2); i++){
        strncpy(p, s+i, strlen(s)-2*i);
        p[strlen(s)-2*i]=NULL;
        cout<<p<<endl;
    }

}
