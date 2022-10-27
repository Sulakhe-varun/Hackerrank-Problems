#include<iostream>
using namespace std;
/*bool isd(int num){
    if(num%2==0){
        return true;
    }
    else{
        return false;
    }
}*/
/*int solve(int N) {
        // code here
        
        if(N==0)
        return 0;
        int ans=1;
        while(N!=1){
        if(N%2==0){
        N= N/2;
        ++ans;
        }
        else{
        N= (N+1)/2;
        ans+=1;
        }
        }
        return ans;
    }*/
    int solve(int num){
        int ans=0,i=1;
        while(num>0){
            ans++;
            num/=2;
            cout<<"The value of num in iteration "<<i++<<" is "<<num<<"\n";
        }
        return ans;
    }
    int main(){
        int num=7;
        cout<<solve(num)<<" \n";
       cout<<solve(0)<<"\n";
         cout<<solve(7);
    }

//    7  co=3  mo=6