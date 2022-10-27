#include<iostream>
bool palindrome(int num){
    int sum=0,rem=0;
    int temp=num;
    while (num>0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    return (sum==temp)?true:false;


    
}
int main(){
    int n;
    std::cin>>n;
    if (palindrome(n))
    std::cout<<"Number is Palindrome";
    else
    std::cout<<"Not A Palindrome Number";
}