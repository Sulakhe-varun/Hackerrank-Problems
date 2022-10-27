#include<iostream>
#include<bits/stdc++.h>
#define size 5
using namespace std;
//Using Array
/*int top=-1;
int stack[size];
void push(int x){
     if(top==size-1)
     {
        cout<<"full";
     }
     else{
        stack[++top]=x;
        cout<<x<<" inserted\n";
     }
}

void pop(){
    if (top==-1){
        cout<<"empty";
    }
    else{
        cout<<"\n"<<stack[top]<<" removed";
        int x=stack[--top];
        }
}
void display(){
    if(top==-1) cout<<"empty";
    else{
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
    }
}
int main(){
    push(2);
    push(3);
    push(4);
    display();
    pop();
    display();
    return 0;
}*/
class stack{
    int top=-1;

    public:
    //stack(){
      //  top=-1;
    //}
    int s[size];
    bool isfull();
    bool isempty();
    int push(int item);
    int pop();
    void display();
};
bool stack::isfull(){
    if(top>(size-1))
    return true;
    else
    return false;
}
bool stack::isempty(){
    return (top<0);
}
int stack::push(int item){
    if(isfull()){
        cout<<"\nStack is Full\n";
    }
    else{
        s[++top]=item;
        cout<<item<<" Inserted \n";
    }
    return 0;
}
int stack::pop(){
    int item;
    if(isempty()){
        cout<<"\n Stack is Empty\n";
    }
    else{
         item=s[top--];
        
        //cout<<item<<"\n Item Deleted\n";
    }
    return item;
}
void stack::display(){
    if(isempty()){
        cout<<"\n stack is empty\n";
    }
    else{
        for(int i=top;i>=0;i--){
            cout<<s[i]<<" ";
        }
    }
}
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.pop()<<" "<<s.pop()<<"  deleted from stack\n"; 
    s.display();
    return 0;
}
