#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar1[5]={1,2,3,4,5};
    int ar2[5];
   int n=5;
    copy_n(ar1,n,ar2);
    for (int i:ar1){
    cout<<ar1[i]<<" ";
    }

}