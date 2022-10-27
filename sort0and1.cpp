#include<iostream>
using std::cout;
void sort(int arr[],int size){
  /*  int left = 0, right = size - 1;
 while (left < right)
 {

  while (arr[left] == 0 && left < right)
  left++;
  while (arr[right] == 1 && left < right)
   right--;
  if (left < right)
  {
   arr[left] = 0;
   arr[right] = 1;
   left++;
   right--;
  }*/
  int c0=0,c1=0;
  for(int i=0;i<size;i++){
    if(arr[i]==0)
    c0++;
    else if(arr[i]==1)
    c1++;
  }
  for(int i=0;i<size;i++){
  if(i<c0)
  arr[i]=0;
  else
  arr[i]=1;
  }
 for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\nc0: "<<c0<<"c1: "<<c1;
 }

int main(){
    int arr[]={0,1,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
}
