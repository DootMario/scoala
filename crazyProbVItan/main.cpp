#include <bits/stdc++.h>
using namespace std;

bool pal(char * cuv){

    int n= strlen(cuv);

    for(int i=0; i<n/2; i++){
        if(cuv[i]!=cuv[n-i-1]){
            return false;
        }
    }

    return true;

}

//void ms(char *v[], int n){
//
//    if(n>1){
//        int mid = n / 2;
//
//        char *sub1[mid];
//        char *sub2[n - mid];
//
//        for (int i = 0; i < mid; i++) {
//            sub1[i] = v[i];
//        }
//        for (int i = mid; i < n; i++) {
//            sub1[i - mid] = v[i];
//        }
//
//        ms(sub1, mid);
//        ms(sub2, n - mid);
//
//        int i=0, j=0, k=0;
//
//        while(i<mid && j<n-mid){
//
//            if(strcmp(sub1[i], sub2[j])<=0){
//                v[k]=sub1[i];
//                i++;
//            }
//            else{
//                v[k]=sub2[j];
//                j++;
//            }
//
//            k++;
//
//        }
//
//        while(i<mid){
//            v[k]=sub1[i];
//            i++;
//            k++;
//        }
//
//        while(j<mid-n){
//            v[k]=sub2[j];
//            j++;
//            k++;
//        }
//
//    }
//
//}

int main(){

    char s[101], tok[]=" .,!?";
    char * cuv[100];
    int i=0, k=0;

    cin.getline(s,101);

    cout<<s<<endl;
    char *p=strtok(s, tok);

    cuv[0]=p;
    ///pct 1
    while(p){
        p=strtok(NULL, tok);
        i++;
        cuv[i]=p;
    }

    cout<<"pct1: "<<i<<endl;

    ///pct 2
    for(int j=0; j<i; j++){
        if(strlen(cuv[j])%2==0){
            k++;
        }
    }

    cout<<"pct2: "<<k<<endl;

    ///pct 3
    k=0;
    for(int j=0; j<i; j++){
        if(pal(cuv[j])){
            k++;
        }
    }

    cout<<"pct3: "<<k<<endl;

    ///pct 4
    cout<<"pct4: ";

    int ok=0;
    while(ok==0){
        for(int j=0; j<i-1; j++) {
            ok=1;
            if(strcmp(cuv[j], cuv[j+1])>0){
                ok = 0;
                p = cuv[j];
                cuv[j] = cuv[j + 1];
                cuv[j + 1] = p;

            }
        }
    }

    for(int j=0; j<i; j++){
        cout<<cuv[j]<<" ";
    }

}