#include<iostream>
using namespace std;
int main(){
    int num = 25,ans=-1;
    int s=0,e=num;
    int mid=(s+e)/2;
    while(s<=e){
         int sq=mid*mid;
        if(sq==num){
            cout<<mid;
            break;
        }
        else if(sq<num){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid=(s+e)/2;
    }
 //  cout<<ans;
}