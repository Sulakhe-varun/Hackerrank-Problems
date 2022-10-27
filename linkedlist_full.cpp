#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int d){
        data=d;
        next=NULL;
    }
};
void print_list(node* head){
    //node* temp=head;
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void deletefront(node* head){
    head=head->next;
    cout<<"\nDelete head\n";
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void deleteatlast(node* head){
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    cout<<"\nDelete at last\n";
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void insertatfront(node** head,int data){
    node* temp=new node(data);
    temp->next=*head;
    *head=temp;
}
void insertatend(node** head,int data){
    node* newnode=new node(data);
    node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    
}
int main(){
    node* n2;
    node* n3;
    node* n1=new node(1);
    
    n2=new node(2);
    
    n3=new node(3);
    node* head=n1;
    //link
    head->next=n2;
    n2->next=n3;
    int ch,data,choice=1;
    //cin>>choice;
    do{
    cout<<"\n1.Insert at Front\n2.Insert at End\n3.Delete at front\n4.Delete at Last\n5.Display List\nEnter your Choice: ";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"\nInsert Item\n";
        cin>>data;
        insertatfront(&head,data);
    break;

    case 2:
        cout<<"\nInsert Item\n";
        cin>>data;
        insertatend(&head,data);
    break;

    case 3:
       // cout<<"\nDelete at front\n";
        deletefront(head);
        break;
    case 4:
        deleteatlast(head);
        break;
    case 5:
        print_list(head);
        break;
    
    default:
        cout<<"Wrong Choice";
        break;
    }
    cout<<"\n1 for continue:- ";
    cin>>choice;
    }while(choice!=0);
}