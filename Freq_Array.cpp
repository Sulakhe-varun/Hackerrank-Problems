#include<iostream>
using namespace std;
int main(){
    
    int arr[]={1,2,2,1,3};
    int s=sizeof(arr)/sizeof(arr[0]);
    int freq[5]={0};
    for(int i=0;i<s;i++){
        cout<<"arr[i]: ---------->"<<arr[i]<<endl;
        freq[arr[i]]++;
        cout<<"freq[arr[i]]:----->"<<freq[arr[i]]<<endl<<endl;
    }
   /* for(int i=0;i<10;i++){
        
         cout<<freq[i]<<"  ";
    }*/
   
}