#include<iostream>
#include<algorithm>
using std::cout;
void print(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
void insert(int ar[],int siz){
    int elem,pos;
    cout<<"Enter the pos";
    std::cin>>pos;
    if(pos<siz){
        cout<<"Enter element";
       std:: cin>>elem;
        for(int i=siz;i>=pos;i--){
            ar[i]=ar[i-1];
        }
        ar[pos]=elem;
    }
    print(ar,siz+1);
}
void delete_elem(int ar[],int si){
    int elem,pos,flag=0;
    for(int i=0;i<si;i++){
        cout<<ar[i]<<" ";
    }
    cout<<"\n Enter element: ";
    std::cin>>elem;
    for(int i=0;i<si;i++){
        if(ar[i]==elem){
        pos=i;
        flag++;
        break;
        }
    }
    if(flag==0){
         cout<<"\n Element not found";
         exit(1);
    }
    for(int i=pos+1;i<si;i++){
        ar[i-1]=ar[i];
    }
    si=si-1;
    for(int i=0;i<si;i++){
        cout<<ar[i]<<" ";
    }
    
}
/*void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}*/
void reverse(int arr[],int si){
    int s=0,e=si-1;
    while(s<e){
        std::swap(arr[s],arr[e]);
        s++;
        e--;
    }
    print(arr,si);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int s=5,ch,rep;
    while(rep<=5){
    cout<<"\n1.Insert Element\n2.Delete Element\n3.Reverse Array\n4.Display Array\n5.Exit\nEnter choice: ";
    std::cin>>ch;
    
    switch (ch)
    {
    case 1:
        insert (arr,s);
        break;
    case 2:
        delete_elem(arr,s);
        break;
    case 3:
        reverse(arr,s);
        break;
    case 4:
        print(arr,s);
        break;
    case 5:
        exit(1);
    
    default:
        cout<<"\nInvalid choice\n";
        break;
    }
    }

    
}
void insert_elem(int a[],int n){
    int elem,pos;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n Enter position to insert: ";
    std::cin>>pos;
    if(pos<=n){
        cout<<"Enter the element: ";
        std::cin>>elem;
        for(int i=n;i>pos;i--){
            a[i]=a[i-1];
        }
        a[pos]=elem;
        cout<<"\n New Array\n";
        for(int i=0;i<=n;i++){
            
            cout<<a[i]<<" ";}
    }
    else{
        cout<<"\n Invalid Position";
    }
}
