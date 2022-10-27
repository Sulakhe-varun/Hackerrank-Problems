#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*int main(){
    int a[]={1,2,3,4,5};
    int s=5,rp=2;
    int temp[5];
    for(int i=0;i<s;i++){
        temp[(i+rp)%s]=a[i];
    }
    //a=temp;
    for(int i=0;i<s;i++){
        cout<<temp[i]<<" ";
    }
}*/
int reverse(string s,int size){
    stack<char>st;
    for(int i=0;i<size;i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}
int main(){
    string st="string";
    int siz=st.size();
    reverse(st,siz);
}